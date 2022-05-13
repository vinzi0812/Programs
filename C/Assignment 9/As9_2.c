#include<stdio.h>
void reverse(int n, int arr[n])
{
    for(int i=0;i<n/2;i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n-1 - i);
        *(arr + n-1 - i) = temp;
    }
}
int main()
{
    int n;
    printf("Enter number of elements of array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: ");
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",(arr+i));
    reverse(n,arr);
    printf("The array after reversing is:\n");
    for(int i=0;i<n;i++)
        printf("%d ",*(arr+i));
    return 0;
}