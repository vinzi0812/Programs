#include<stdio.h>
void swap(int n, int arr[n])
{
    int i,min_index = 0, max_index = 0;
    for(i=1;i<n;i++)
    {
        if(*(arr+i)<*(arr+min_index))
            min_index=i;
        if(*(arr+i)>*(arr+max_index))
            max_index=i;
    }
    int temp = *(arr + max_index);
    *(arr + max_index) = *(arr + min_index);
    *(arr + min_index) = temp;
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
    swap(n,arr);
    printf("The array after swapping Maximum and Minimum elements is:\n");
    for(int i=0;i<n;i++)
        printf("%d ",*(arr+i));
    return 0;
}