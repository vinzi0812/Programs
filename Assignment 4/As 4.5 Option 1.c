#include<stdio.h>
int tiles(int l,int b)
{
    if(l==0 || b==0)
    {
        return 0;
    }
    else if(l%2==0 && b%2==0)
    {
        return tiles(l/2,b/2);
    }
    else if(l%2==0 && b%2==1)
    {
        return l+tiles(l/2,b/2);
    }
    else if(l%2==1 && b%2==0)
    {
        return b+tiles(l/2,b/2);
    }
    else
    {
        return l+b-1+tiles(l/2,b/2);
    }
}
int main()
{
    int l,b;
    printf("Enter length and breadth of floor: ");
    scanf("%d %d",&l,&b);
    printf("Minimum number of tiles required is %d",tiles(l,b));
    return 0;
}