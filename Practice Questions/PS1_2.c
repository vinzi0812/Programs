#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of dishes: ");
    scanf("%d",&n);
    float bill[n][2], amount[n], sum=0, tax;
    int q[n];
    printf("Enter the cost of the dish and the quantity in order:\n ");
    for(int i = 0; i < n; i++)
    {
        scanf("%f %f",&bill[i][0],&bill[i][1]);
        amount[i] = bill[i][0] * bill[i][1];
        q[i] = (int)bill[i][1];
        sum += amount[i];
    }
    tax = sum * 0.1;
    sum *= 1.1;
    printf("----BILL----\n");
    printf("ITEM\tCOST\tQTY\tAMT\n");
    for(int i = 0; i < n; i++)
        printf("ITEM%d\t%.2f\t%d\t%.2f\n",i+1,bill[i][0],q[i],amount[i]);
    printf("Service Charge = %.2f\n",tax);
    printf("Total Amount = %.2f\n",sum);
    return 0;
}