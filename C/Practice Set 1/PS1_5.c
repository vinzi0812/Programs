#include<stdio.h>
int prime(int n)
{
    int count=0;
    for(int i=2;i<n;i++)
        if(n%i==0)
        {
            count=1;
            break;
        }
    return count;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
        if(n%i==0 & prime(i)==0)
            printf("%d ",i);
    return 0;
}