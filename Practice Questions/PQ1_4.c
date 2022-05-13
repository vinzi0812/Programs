#include<stdio.h>
#include<math.h>
int main()
{
    int speed, dur, n;
    float degree, dist;
    printf("Enter the number of routes: ");
    scanf("%d",&n);
    float coords[n][2];
    for(int i = 0; i < n; i++)
    {
        printf("Enter the speed in km/hr: ");
        scanf("%d",&speed);
        printf("Enter the duration of the flight in minutes: ");
        scanf("%d",&dur);
        printf("Enter the degree of the route: ");
        scanf("%f",&degree);
        dist = speed * dur / 60.0;
        coords[i][0] = dist * sin(degree*3.14159/180);
        coords[i][1] = dist * cos(degree*3.14159/180);
    }
    printf("Coordinates of the end point of the flight are:\n");
    for(int i = 0; i < n; i++)
        printf("%f,%f\n",coords[i][0],coords[i][1]);
    return 0;
}