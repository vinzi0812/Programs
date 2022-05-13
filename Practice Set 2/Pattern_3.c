#include<stdio.h>
void pattern(int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
    for(i=i;i>0;i--)
    {
        for(int j=1;j<=i;j++)
            printf("%d ",j);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the maximum number: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}