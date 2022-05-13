#include<stdio.h>
void pattern(int n)
{
    for(int i=1; i <= n; i++)
    {
        for(int j=1; j <= i; j++)
            printf("%d ", (i-n+ ((n*(n+1)/2)-((n-j)*(n+1-j)/2))));
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}