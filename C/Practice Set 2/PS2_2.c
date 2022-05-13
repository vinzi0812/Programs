#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(i%2==1)
            sum+=i;
    printf("Sum of even numbers is %d",sum);
    return 0;
}