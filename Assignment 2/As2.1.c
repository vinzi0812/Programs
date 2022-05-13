#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two numbers, the smaller one first: ");
    scanf("%d %d",&a,&b);
    int lcm,gcd;
    for(int i=1;i<=a;i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            gcd = i;
        }
    }
    lcm=(a*b)/gcd;
    printf("The LCM and GCD of %d and %d are %d and %d respectively.",a,b,lcm,gcd);
    return 0 ;
}
