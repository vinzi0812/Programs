#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter two positive numbers: ");
    scanf("%d %d",&a,&b);
    int n[100],k=0,count=0,i,j;
    for(i=a;i<=b;i++)//calling all numbers between A to B
    {
        count=0;
        for(j=2;j<i;j++)//for loop for checking if a number is prime or not
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)//storing all prime numbers inside an array
        {
            n[k]=i;
            k++;
        }
    }
    for(int i=0;i<=k;i++)
    {
        if(n[i+1]-n[i]==2)
        {
            printf("\n%d %d\n",n[i],n[i+1]);
        }
    }
    return 0;
}
