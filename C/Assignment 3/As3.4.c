#include<stdio.h>
#include<conio.h>
int rel_prime(int a, int b)
{
    int p[100],q[100],j=0,k=0,temp=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
            p[j]=i;
            j++;
        }
    }
    for(int i=1;i<a;i++)
    {
        if(b%i==0)
        {
            q[k]=i;
            k++;
        }
    }
    for(int i=1;i<k;i++)
    {
        if(a%q[i]==0)
        {
            temp=1;
        }
    }
    if(temp==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers, the smaller one first: ");
    scanf("%d",&a);
    scanf("%d",&b);
    if(rel_prime(a,b)==1)
    {
        printf("Numbers are relatively prime");
    }
    else if(rel_prime(a,b)==0)
    {
        printf("Numbers are not relatively prime");
    }
    return 0;
}