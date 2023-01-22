#include<iostream>
using namespace std;
int getmax(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
void counting_sort(int arr[],int size,int pos)
{
    int b[size];
    int count[10]={ 0 };
    
    for(int i=0;i<size;i++)
    {
        count[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++){
    count[i]+=count[i-1];
    }
    for(int i=size-1;i>=0;i--)
    {
        b[--count[(arr[i]/pos)%10]]=arr[i];
    }
    for(int i=0;i<size;i++)
    {
        arr[i]=b[i];
    }
}
void radix_sort(int arr[],int size)
{
    int m=getmax(arr,size);
    
    for(int pos=1;m/pos>0;pos*=10)
    counting_sort(arr,size,pos);
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={45,34,67,89,6,7,0,-9};
    int size=sizeof(arr)/sizeof(arr[0]);
    radix_sort(arr,size);
    printarray(arr,size);
    printf("radix sort\n");
    return 0;
}

