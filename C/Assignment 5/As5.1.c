#include<stdio.h>
void selectionsort(int arr[],int n)
{
    int min,index;
    for(int i=0;i<n-1;i++)
    {
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }
        int temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
    }
}
int main()
{
    int n;
    printf("Enter no of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printf("Sorted array is as follows:\n ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}