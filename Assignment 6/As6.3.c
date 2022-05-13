#include<stdio.h>
int line(int m,float arr[m][2],float x,float y)
{
    int count=0;
    for(int i=0;i<m;i++)
    {
        if(x<arr[i][0] && y>arr[i][1] && y<arr[i+1][1])
            count++;
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number of coordinates you are going to enter: ");
    scanf("%d",&n);
    float arr[n][2];
    printf("Enter the x and y coordinates in a cylcic manner: \n");
    for(int i=0;i<n;i++)
    {
        printf("x: ");
        scanf("%f",&arr[i][0]);
        printf("y: ");
        scanf("%f",&arr[i][1]);
    }
    float x,y;
    printf("Enter the coordinates you want to search: ");
    printf("x: ");
    scanf("%f",&x);
    printf("y: ");
    scanf("%f",&y);
    int count = line(n,arr,x,y);
    if(count%2 == 0)
        printf("Inside.");
    else
        printf("Outside.");
    return 0;
}
