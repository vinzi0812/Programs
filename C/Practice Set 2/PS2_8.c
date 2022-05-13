#include<stdio.h>
#include<math.h>
void number(unsigned int num)//num is a 3 digit number
{
    char units[10][30]={" "," one "," two "," three "," four "," five "," six "," seven "," eight "," nine "};
    char units2[10][30]={" ten "," eleven "," twelve "," thirteen "," fourteen "," fifteen "," sixteen "," seventeen "," eighteen "," nineteen "};
    char tens[10][30]={" "," "," twenty "," thirty "," forty "," fifty "," sixty "," seventy "," eighty "," ninety "};
    int count = 0, temp=(num%100)/10;
    if(num/100 > 0)
    {
        printf("%s Hundred ",units[num/100]);
    }
    if(num%100 < 20 && num%100 > 9)
    {
        printf("%s",units2[num%10]);
    }
    else
    {
        printf("%s %s ",tens[temp],units[num%10]);
    }
}
void places(int num)
{
    char place[5][30]={""," Thousand "," Million "," Billion "," Trillion "};
    printf(" %s ",place[num]);
}
int main()
{
    unsigned long int num;
    unsigned long int place[5];
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=0;num>0;i++)
    {
        place[i]=num%1000;
        num /= 1000;
    }
    for(int i=4;i>=0;i--)
    {
        if (place[i]>0)
        {
            printf("%d",place[i]);
            number(place[i]);
            places(i);
        }
    }
    return 0;
}