#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,n=0,temp;
    printf("Enter the number: ");
    scanf("%d",&a);
    temp=a;
    for(int i=0;temp>0;i++)
    {
        temp=temp/10;
        n++;
    }
    int b = a*a;
    int b1,b2,p;
    p=pow(10,n);
    b1=b/p;
    b2=b%p;
    if((b1+b2)==a)
    {
        printf("%d is a Kaprekar Number",a);
    }
    else
    {
        printf("%d is not a Kaprekar Number",a);
    }
    return 0;
}