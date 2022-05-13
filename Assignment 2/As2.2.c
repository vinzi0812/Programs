#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int flag=0;
    int input;
    do
    {
        printf("If you want to convert Decimal to Binary, type 1 and if you want to convert Binary to Decimal, then type 2\n");
        scanf("%d",&input);
        if(input==1)
        {
            flag=1;
            int dec,i,n,a[100];
            printf("\nEnter the Decimal Number: ");
            scanf("%d",&dec);
            n = dec;
            for(i=0;dec>0;i++)
            {
                a[i]=dec%2;
                dec=dec/2;
            }
            printf("\nBinary of %d is ",n);
            for(i=i-1;i>=0;i--)
            {
                printf("%d",a[i]);
            }
        }
        else if(input==2)
        {
            flag=1;
            int bin,n,temp,sum=0;
            printf("\nEnter the Binary Number: ");
            scanf("%d",&bin);
            n=bin;
            for(int i=0;n>0;i++)
            {
                temp=(n-((n/10)*10))*pow(2,i);
                n=n/10;
                sum = sum + temp;
            }
            printf("\nDecimal of %d is %d",bin,sum);
        }
        else
        {
            flag=0;
            printf("\nWrong Choice. Enter Again\n");
        }
    }while(flag==0);
    return 0 ;
}
