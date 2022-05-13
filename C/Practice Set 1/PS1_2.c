#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;temp<=n;i++)
        temp=pow(2,i);
    for(i=i-2;i>=0;i--)
    {
        if(pow(2,i)<=n)
        {
            printf("1");
            n -= pow(2,i);
        }
        else
            printf("0");
    }
    return 0;
}