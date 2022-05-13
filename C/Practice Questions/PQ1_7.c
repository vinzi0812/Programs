#include<stdio.h>
#include<math.h>
int main()
{
    printf("Amount\tRate\tTime\tInflated Value\n");
    for(int i = 1; i <= 36; i++)
        printf("1000\t%d\t%.2f\t%.2f\n",i,72.0/i,1000.0 * pow(1.0+(i/100.0),72.0/i));
    return 0;
}