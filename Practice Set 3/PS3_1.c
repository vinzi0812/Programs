#include<stdio.h>
void cube(int *x)
{
    *x = (*x)*(*x)*(*x);
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    cube(&x);
    printf("Cube : %d",x);
    return 0;
}