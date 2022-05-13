#include <stdio.h>
int arr[101]={0};

int series(int n)
{
    if(n==1)
    {
        arr[1]=1;
        return 1;
    }
    else
    {
        int t=series(n-1)-n;
        if(t>0 && arr[t]==0 )
        {
            arr[t]=1;
            return t;
        }
        else
        {
            arr[t+2*n]=1;
            return (t+2*n);
        }
    }
    
}
void reset()
{
    for(int i=1;i<=100;i++)
    {
        arr[i]=0;
    }
}
int main()
{
    int n;
    printf("Enter the number of terms of the series\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        
        int t=series(i);
        printf("%d ",t);
        reset();
        
    }
    return 0;
}