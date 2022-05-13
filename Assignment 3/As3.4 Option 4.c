#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if (count==1)
    {
        return 0;
    }
    else if(count == 0)
    {
        return 1;
    }
}
void mobius(int n)
{
    int a[100],rem=0,count=0,k=0,b;
    for (int i=2; i<n;i++)
    {
        b = n, count=0;
        if(prime(i)==1 && n%i==0)
        {
            while(rem==0)
            {
                b/=i;
                count++;
                rem=b%i;
            }
            a[k]=count;
            k++;
        }
    }
    count=0;
    for(int i=0;i<=k;i++)
    {
        if(a[i]>1)
        {
            printf("M(%d)=0",n);
            count++;
            break;
        }
    }
    if(count==0)
    {
        int m = pow(-1,k);
        printf("M(%d)=%d",n,m);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    mobius(n);
    return 0;
}