#include<stdio.h>
int rep(int p)
{
    int i, j = 0, m[100], flag = 0;
    double frac = 1.0 / p;
    for(i = 0; ; i++)
    {
        m[i] = frac * 10;
        frac *= 10;
        frac -= (int)frac;
        if(flag == 0 && m[i] != 0)
        {
            j = i;
            flag = 1;
        }
        if(flag == 1 && m[j] == m[i+1])
            return ((i+2) - j);
    }
}
int main()
{
    int n;
    printf("Enter an odd prime number: ");
    scanf("%d",&n);
    printf("No. of recurring decimals of 1/%d is: %d",n,rep(n));
    return 0;
}