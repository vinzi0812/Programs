#include<stdio.h>
#include<conio.h>
void prime()
{
    printf("Enter two numbers: ");
    int a,b,temp=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        temp=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                temp=1;
            }
        }
        if(temp==1)
        {
            printf("%d ",i);
        }
        else 
        {
            printf("%d* ",i);
        }
        if((i-a+1)%10==0)
        {
            printf("\n");
        }
    }
}
int main()
{
    prime();
    return 0;
}