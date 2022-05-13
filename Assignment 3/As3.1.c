#include<stdio.h>
#include<conio.h>
int sum(int n)
{
    int temp=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            temp+=i;
        }
    }
    return temp;
}
int main()
{
    int i;
    printf("Enter the number: ");
    scanf("%d",&i);
    printf("Sum of all divisors: %d",sum(i));
    return 0;
}