#include<stdio.h>
void pattern(int n)
{
    for(int i=2; i< 2*n;i += 2)
    {
        int j;
        for(j = 2;j<=i;j+=2)
            printf("%d ",j);
        for(j=j-4;j>0;j-=2)
            printf("%d ",j);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    pattern(n);
    return 0;
}