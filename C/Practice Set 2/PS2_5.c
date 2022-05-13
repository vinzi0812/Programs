#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while((temp/10)>0)
        temp/=10;
    printf("First digit and last digit are %d and %d",temp,n%10);
    return 0;
}