#include<stdio.h>
int palindrome(char str[100])
{
    int i,count=0;
    for(i=0;str[i]!=0;i++);
    for(int j=0;j<i;j++)
    {
        if(str[j]==str[i-j-1] || str[j]==str[i-j-1]+32 || str[j]==str[i-j-1]-32)
        {
            count=0;
        }
        else
        {
            count=1;
            break;
        }
    }
    if(count ==1)
        return 0;
    else
        return 1;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    char mat[100][100];
    int i=0,j=0,k=0,l=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            mat[k][j] = '\0'; //assigning the element to \0 as to signify end of string
            k++;
            j=0;
        }
        else
        {
            mat[k][j] = str[i]; //adding letters to the 2D array
            j++;
        }
    }
    mat[k][j]='\0';
    for(i=0;i<=k;i++)
        if(palindrome(mat[i])==1)
            printf("%s ",mat[i]);
    return 0;
}