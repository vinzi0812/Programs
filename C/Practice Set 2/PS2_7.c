#include<stdio.h>
int main()
{
    int arr[10]={0};
    long int n,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;n>0;i++)
    {
        temp=n%10;
        arr[temp]++;
        n/=10;
    }
    printf("Number\tFrequency");
    for(int i=0;i<10;i++)
        printf("\n%d\t%d",i,arr[i]);
    return 0;
}