#include<stdio.h>
int ackerman(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    else if(m>0 && n==0)
    {
        return ackerman(m-1,1);
    }
    else if(m>0 && n>0)
    {
        return ackerman(m-1,ackerman(m,n-1));
    }
}
int main()
{
    printf("m\tn\tAckerman Value");
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=6;j++)
        {
            printf("\n%d\t%d\t%d",i,j,ackerman(i,j));
        }
    }
    return 0;
}