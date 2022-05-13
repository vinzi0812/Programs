#include<stdio.h>
int main()
{
    printf("Net Price\tTax\tGross Price\n");
    for(int i = 1000; i <= 4000; i += 250)
    {
        if(i < 2000)
            printf("%d\t\t%.2f\t%.2f\n",i,i*0.15,i*1.15);
        else if(i >= 2000 && i <= 3000)
            printf("%d\t\t300\t%d\n",i,i+300);
        else
            printf("%d\t\t%.2f\t%.2f\n",i,i*0.1,i*1.1);
    }
    return 0;
}