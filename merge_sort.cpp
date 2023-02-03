#include<stdio.h>
void merge(int arr[],int p,int q,int r)
{
    int n1,n2;
    n1=q-p+1;
    n2=r-q;
    
    int l[n1],m[n2];
    
    for(int i=0;i<n1;i++)
    l[i]=arr[p+i];
    for(int j=0;j<n2;j++)
    m[j]=arr[q+1+j];
    
    int i,j,k;
    i=0;
    j=0;
    k=p;
    
    while(i<n1 && j<n2)
    {
        if(l[i]<m[j])
        {
            arr[k]=l[i];
            i++;
        }
        else
        {
            arr[k]=m[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=l[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=m[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    printf(" %d ",arr[i]);
}
int main()
{
    int arr[]={4,4565,4,78954,67,34,99,2,56,88,787,86,5576};
    int size=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,size-1);
    printf("merge sort\n");
    printarray(arr,size);
}
