#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quick_sort(int arr[],int low,int high)
{
    int loc;
    if(low<high)
    {
        loc=partition(arr,low,high);
        quick_sort(arr,low,loc-1);
        quick_sort(arr,loc+1,high);
    }
}
void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    printf(" %d ",arr[i]);
}
int main()
{
    int arr[]={34,56,78,3,-44,244,577,76,88,990,454,5,66};
    int size=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,size-1);
    printf("\n\nquick sort\n\n");
    printarray(arr,size);
}
