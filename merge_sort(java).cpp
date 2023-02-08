class Mergesort{
    static void megre(int arr[],int p,int q,int r)
    {
        int n1,n2;
        n1=q-p+1;
        n2=r-q;
        int l[]=new int[n1];
        int m[]=new int[n2];
        for(int i=0;i<n1;i++)
        l[i]=arr[i+p];
        for(int j=0;j<n2;j++)
        m[j]=arr[j+q+1];
        int i=0,j=0,k=p;
        while(i<n1 && j<n2)
        {
            if(l[i]<m[j])
            arr[k++]=l[i++];
            else
            arr[k++]=m[j++];
        }
        while(i<n1)
        arr[k++]=l[i++];
        while(j<n2)
        arr[k++]=m[j++];
    }
    static void merge_sort(int arr[],int low,int high)
    {
        if(low<high)
        {
            int mid=(low+high)/2;
            merge_sort(arr,low,mid);
            merge_sort(arr,mid+1,high);
            megre(arr,low,mid,high);
        }
    }
}
class Main{
	public static void main(String[] args)
	{
	    int arr[]={4,5,-67,89,-34,-6,78};
	    int size=arr.length;
	    Mergesort.merge_sort(arr,0,size-1);
	    System.out.println("Mergesort");
	    for(int i=0;i<size;i++)
	    System.out.print(arr[i]+"\t");
	}
}


