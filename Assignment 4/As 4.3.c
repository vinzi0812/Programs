#include<stdio.h>
int series(int n)
{
    int num;
    if(n<=0)
    {
        printf("%d ",n);
        return n;
    }
    else
    {
        printf("%d ",n);
        num = 5 + series(n-5);
        printf("%d ",num);
        return num;
    }
}
int main()
{
    int n;
    printf("Enter an number: ");
    scanf("%d",&n);
    series(n);
    return 0;
}