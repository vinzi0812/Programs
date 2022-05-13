#include<stdio.h>
int main()
{
    int a,b,count=0;
    printf("Enter 2 numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        for(int j=2;j<i;j++)
            if(i%j==0)
            {
                count=1;
                break;
            }
        if(count==0)
            printf("%d ",i);
        count=0;
    }
    return 0;
}