#include<stdio.h>
int main()
{
    int n; //number of entries
    printf("Enter the number of entries: ");
    scanf("%d",&n);
    int cheque[n][2]; //2-D array in which one column is cheque number and other is account number
    printf("Enter the cheque number followed by account number for all entries:\n");
    for(int i = 0; i < n; i++)
        scanf("%d %d",&cheque[i][0],&cheque[i][1]);
    printf("Possible Counterfiets:\n");
    for(int i = 0; i < n; i++)
        if(cheque[i][1] >= 10000 && cheque[i][1] <= 10010)
            printf("Account Number: %d999\nCheque Number: %d",cheque[i][1],cheque[i][0]);
    return 0;
}