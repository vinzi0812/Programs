#include<stdio.h>
int binarysearch(int arr[],int start,int end,int n)
{
    if(end!=0)
    {
        int mid = start+(end-1)/2;
        if(arr[mid]==n)
        {
            return mid;
        }
        else if(arr[mid]>n)
        {
            return binarysearch(arr,start,mid-1,n);
        }
        else
        {
            return binarysearch(arr,mid+1,end,n);
        }
    }
    else
        return -1;
}
int main()
{
    int x,n;
    printf("Enter the total number of elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array in ascending order:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched: \n");
    scanf("%d",&x);
    if(binarysearch(arr,0,n-1,x)!=-1)
    {
        printf("%d found at the %dth index",x,binarysearch(arr,0,n-1,x));
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}