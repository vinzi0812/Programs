#include<stdio.h>
int powers(int x,int n)
{
    int prod = 1, power = x, m = n;
    while(m != 0)
    {
        if(m % 2 == 1)
        {
            prod = prod * power;
        }
        m /= 2;
        power *= power;
    }
    return prod;
}
int main()
{
    int base, index;
    printf("Enter base and index: ");
    scanf("%d %d",&base,&index);
    printf("%d ^ %d = %d",base,index,powers(base,index));
    return 0;
}