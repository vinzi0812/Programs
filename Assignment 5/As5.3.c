#include<stdio.h>
void rotation(int arr[],int n,int m)
{
    int temp,i;
    for(i=1;i<=m;i++)
    {
        temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n-1]=temp;
    }
}
int main()
{
    int m,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the amount of times you want it to be rotated: ");
    scanf("%d",&m);
    rotation(arr,n,m);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}