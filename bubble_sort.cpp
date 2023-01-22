#include<stdio.h>
void bubble_sort(int array[],int size)
{
    int comp=0,swap=0;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            comp++;
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                swap++;
            }
            
        }
        
    }
    
    printf("no of comparison are %d\n",comp);
    printf("no of swapped are %d\n",swap);
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
    int array[]={1,2,3,6,5};
    int size=sizeof(array)/sizeof(array[0]);
    bubble_sort(array,size);
    printf("bubble sort\n");
    printarray(array,size);
}

