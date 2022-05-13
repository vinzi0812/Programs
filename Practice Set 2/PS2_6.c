#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while((temp/10)>0)
        temp/=10;
    printf("Sum of first digit and last digit is %d",temp + n%10);
    return 0;
}