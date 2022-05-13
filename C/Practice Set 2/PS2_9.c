#include<stdio.h>
long int compliment(long int n)
{
    int arr[10], i = 0;
    long int res = 0;
    while(n>0)
    {
        int temp = n%10;
        arr[i++] = 1 - temp;
        n /= 10;
    }
    for(i = i-1;i >= 0;i--)
    {
        res += arr[i];
        res *= 10;
    }
    return res/10;
}
int main()
{
    long int n;
    printf("Enter a binary number: ");
    scanf("%ld",&n);
    printf("1s compliment of the number is : %d",compliment(n));
    return 0;
}