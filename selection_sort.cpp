#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min_term=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[min_term])
            {
                min_term=j;
            }
            
        }
        swap(&array[min_term],&array[i]);
    }
}
void printarray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf(" %d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int array[]={4,56,78,34,-57};
    int size=sizeof(array)/sizeof(array[0]);
    selection_sort(array,size);
    printf("selection sort\n");
    printarray(array,size);
}
