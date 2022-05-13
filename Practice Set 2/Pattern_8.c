#include<stdio.h>
void pattern(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
            printf("  ");
        for(int j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the side length of Right Angled Triangle: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}