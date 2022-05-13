#include<stdio.h>
int main()
{
    int n,prod=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        prod*=i;
    printf("Factorial = %d",prod);
    return 0;
}