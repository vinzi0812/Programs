#include<stdio.h>
int a=0;
int coins(int n)
{
    int coin,temp,
    scanf("%d\n",&coin);
    temp = n-(n/coin)*coin;
    a+=(n/coin);
    coins(temp);
    printf("Minimum number of coins = %d",a);
}
int main()
{
    int n;
    printf("Enter the amount: ");
    scanf("%d",&n);
    printf("Enter the values of coins you have in decreasing amount:\n ");
    coins(n);
    return 0;
}