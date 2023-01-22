#include<stdio.h>
void printarray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf(" %d ",array[i]);
    }
}
void insertion_sort(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        int key=array[i];
        int j=i-1;
        while(key<array[j] && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
} 
int main()
{
    int array[]={2,45,68,4,54,78,-2};
    int size=sizeof(array)/sizeof(array[0]);
    insertion_sort(array,size);
    printf("insertion sort\n");
    printarray(array,size);
}
