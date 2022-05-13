#include<stdio.h>
void zero(int m,int n,int arr[m][n])
{
    for(int i = 0;i<m;i++)
        for(int j=0;i<n;j++)
            *(*(arr + i) + j) = 0;
}
void multiply(int m,int n ,int arr1[m][n],int a, int b, int arr2[a][b],int arr3[m][b])
{
    if(n==a)
        for(int i=0;i<m;i++)
            for(int j=0;j<b;j++)
            {
                int sum = 0;
                for(int k=0;k<n;k++)
                    sum += (*(*(arr1 + i) + k)) * (*(*(arr2 + k) + j));
                *(*(arr3 + i) + j) = sum;
            }
}
int main()
{
    int m,n,a,b;
    printf("Enter dimensions of matrix ");
    scanf("%d %d",&m,&n);
    printf("Enter elements of the array: ");
    int arr1[m][n];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",(*(arr1 + i) + j));
    printf("Enter dimensions of matrix ");
    scanf("%d %d",&a,&b);
    printf("Enter elements of the array: ");
    int arr2[a][b];
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",(*(arr2 + i) + j));
    int arr3[m][b];
    multiply(m,n,arr1,a,b,arr2,arr3);
    printf("The matrix after multiplying is:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<b;j++)
            printf("%d ", *(*(arr3 + i) + j));
    return 0;
}