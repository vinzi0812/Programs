#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter index: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        sum+=pow(x,i);
    printf("Sum of series: %d",sum);
    return 0;
}