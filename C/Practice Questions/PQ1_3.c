#include<stdio.h>
int main()
{
    int t, n, h, dur, min = -1, mintime = 2359;
    printf("Enter your arrival time at station in 24 hour format: ");
    scanf("%d",&t);
    printf("Enter the maximum hours you could tolerate to travel: ");
    scanf("%d",&h);
    printf("Enter the number of trains: ");
    scanf("%d",&n);
    int tt[n][2];
    printf("Enter the departure and arrival time of trains in 24 hour format:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&tt[i][0],&tt[i][1]);
        dur = tt[i][1] - tt[i][0];
        if(dur < (h*100) && tt[i][0] > t)
            if(tt[i][1]<mintime)
            {
                min = i;
                mintime = tt[i][1];
            }
    }
    if(min>0)
        printf("The most suitable train for you leaves at %d and arrives at %d",tt[min][0],tt[min][1]);
    else
        printf("There is no suitable train for you");
    return 0;
}