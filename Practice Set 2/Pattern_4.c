#include<stdio.h>
void pattern(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            printf(" ",j);
        for(int j=1;j<=n;j++)
            printf("* ");
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the side length of Rhombus: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}