#include<stdio.h>
int rec(int x,int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return x*rec(x,n-1);
    }
}
int main()
{
    int x,n;
    printf("Enter base and index: ");
    scanf("%d %d",&x,&n);
    printf("%d ^ %d = %d",x,n,rec(x,n));
    return 0;
}