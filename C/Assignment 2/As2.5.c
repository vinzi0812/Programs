#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,a,b,c,sum=0,temp,count;
    printf("Enter the Number: ");
    scanf("%d",&n);
    temp=n;
	int temp2 = n;
	while(temp2>0)
	{
		temp2 /= 10;
		count++;
	}
    for(int i=0;temp>0;i++)
    {
        a=temp%10;
        b=pow(a,count);
        sum=sum+b;
        temp /= 10;
    }
    if(sum==n)
    {
        printf("%d is an Armstrong Number",n);
    }
    else
    {
        printf("%d is not an Armstrong Number",n);
    }
    return 0;
}