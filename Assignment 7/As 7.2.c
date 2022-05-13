#include<stdio.h>
void copystr(char str[], char strn[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
        strn[i]=str[i];
    strn[i]='\0';
}
int length(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++);
    return i;
}
void compare(char str1[], char str2[], char str[])
{
    int count=0;
    for(int i=0;(str1[i]!='\0'|| str2[i]!='\0');i++)
    {
        if(str1[i]<str2[i])
        {
            copystr(str2,str);
            count=1;
            break;
        }
        else if(str1[i]>str2[i])
        {
            copystr(str1,str);
            count=1;
            break;
        }
    }
    if(count==0)
    {
        copystr(str1,str);
    }
}
void reverse(char str[],char strn[])
{
    int len = length(str);
    for(int i=0;i<len;i++)
    {
        strn[i]=str[len-i-1];
    }
    strn[len]='\0';
}
void concatenate(char str1[], char str2[],char str[])
{
    int len= length(str1);
    int i;
    for(i=0;str1[i]!='\0';i++)
        str[i]=str1[i];
    for(i=i;str2[i-len]!='\0';i++)
        str[i]=str2[i-len];
    str[i]='\0';
}
void convert(char str[],char strn[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
            strn[i] = str[i] - 32;
        else
            strn[i] = str[i];
    }
    strn[i]='\0';
}
int main()
{
    int trash;
    char str1[100], str2[100],strn1[100],strn2[100];
    printf("Enter string 1: ");
    scanf("%[^\n]",str1);
    printf("Enter string 2: ");
    scanf(" %[^\n]",str2);
    int option;
    do
    {
        printf("WELCOME\n");
        printf("Choose one of the following options\n");
        printf("1.Copy one string to another\n");
        printf("2.Find string length\n");
        printf("3.Compare the two strings\n");
        printf("4.Reverse the two strings\n");
        printf("5.Concatenate the two strings\n");
        printf("6.Lower case to upper case\n");
        printf("7.Exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            {
                copystr(str1,strn1);
                copystr(str2,strn2);
                printf("%s\n",strn1);
                printf("%s\n\n",strn2);
                break;
            }
            case 2:
            {
                printf("Length of string 1 is: %d\n",length(str1));
                printf("Length of string 2 is: %d\n\n",length(str2));
                break;
            }
            case 3:
            {
                compare(str1,str2,strn1);
                printf("The greater string is: %s\n\n",strn1);
                break;
            }
            case 4:
            {
                reverse(str1,strn1);
                reverse(str2,strn2);
                printf("%s\n",strn1);
                printf("%s\n\n",strn2);
                break;
            }
            case 5:
            {
                concatenate(str1,str2,strn1);
                printf("%s\n\n",strn1);
                break;
            }
            case 6:
            {
                convert(str1,strn1);
                convert(str2,strn2);
                printf("%s\n",strn1);
                printf("%s\n\n",strn2);
                break;
            }
            case 7:
                break;
            default:
            {    
                printf("Invalid Choice. Pls Enter again:\n ");
                break;
            }
        }
    }while(option!=7);
    return 0;
}