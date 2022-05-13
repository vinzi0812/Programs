#include<stdio.h>
#include<conio.h>
int amicable(int a,int b)
{
    int temp1=0,temp2=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            temp1+=i;
        }
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
            temp2+=i;
        }
    }
    if(temp1==b&&temp2==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    if(amicable(a,b)==1)
    {
        printf("TRUE");
    }
    else if(amicable(a,b)==0)
    {
        printf("FALSE");
    }
    return 0;
}