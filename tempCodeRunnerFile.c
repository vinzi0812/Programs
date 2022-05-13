#include<stdio.h>
void op(int n1,int n2, int *sum, int *mul, int *diff)
{
    *sum = n1+n2;
    *mul = n1*n2;
    *diff = n1-n2;
}
int main()
{
    int n1, n2, sum, mul, diff;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &n1, &n2);
    op(n1,n2,&sum,&mul,&diff);
    printf("Sum : %d\nMultiplication: %d\nDifference: %d",sum,mul,diff);
    return 0;
}