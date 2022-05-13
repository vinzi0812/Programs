#include<stdio.h>
long int compliment(long int n)
{
    int arr[10], i = 0, carry = 1, temp = 0;
    long int res = 0;
    while(n>0)
    {
        int temp = n%10;
        arr[i++] = 1 - temp + carry;
        if(arr[i-1] == 2)
        {
            carry = 1;
            arr[i-1] = 0;
        }
        else if(arr[i-1] == 1)
        {
            carry = 0;
            arr[i-1] = 1;
        }
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
    printf("2s compliment of the number is : %d",compliment(n));
    return 0;
}