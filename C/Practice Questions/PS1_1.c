#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, j=0;
    printf("Enter number of items: ");
    scanf("%d",&n);
    float price[n], temp, temparr[n];
    printf("Enter the prices of the items:\n");
    for(i=0; i<n; i++)
    {
        scanf("%f",&price[i]);
        temp = price[i];
        price[i] *= 0.9;
        price[i] = ceil(price[i]);
        price[i] -= 0.01;
        if(price[i]<temp)
            continue;
        else
        {
            price[i] = temp;
            temparr[j] = i;
            j++;
        }
    }
    j = 0;
    printf("The prices after Sale are as follows: ");
    for(i=0; i<n; i++)
    {
        printf("\n%.2f",price[i]);
        if(temparr[j] == i)
        {
            printf(" - This product was not a part of the sale.");
            j++;
        }
    }
}