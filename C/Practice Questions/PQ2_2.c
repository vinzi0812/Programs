#include<stdio.h>
int a[12] = {23,29,31,35,37,41,43,47,49,53,55,59};
int three(int n)
{
    int i, j = 11, count = 0;
    for(i = 60; n > 0; i--)
    {
        if(i==a[j])
        {
            j--;
            continue;
        }
        else
        {
            count += n/i;
            n -= (n/i)*i;
        }
    }
    if(count <= 3 && count > 0)
        return 1;
    else
        return 0;
}
int min(int n)
{
    int i, j = 11, count = 0;
    for(i = 60; n > 0; i--)
    {
        if(i==a[j])
        {
            j--;
            continue;
        }
        else
        {
            count += n/i;
            n -= (n/i)*i;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the target score: ");
    scanf("%d",&n);
    if(three(n) == 1)
        printf("The score is achievable in less than or equal 3 attempts\n");
    else
        printf("The score is not achievable in less than or equal 3 attempts\n");
    printf("Minimum number of attempts to achieve the score is %d\n",min(n));
    return 0;
}