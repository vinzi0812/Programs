#include<stdio.h>
int compare(char str1[100],char str2[100])
{
    int count=0;
    for(int i=0;(str1[i]!='\0' || str2[i]!='\0');i++)
    {
        if((str1[i]>str2[i]) || (str1[i]<str2[i]))
        {
            count=1;
            break;
        }
    }
    return count;
}
void removed(char str[100])
{
    char mat[100][100], words[100];
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
            mat[k][j] = str[i]; //adding words in 
            j++;
        }
    }
    mat[k][j]='\0';
    j=0;
    for(i=0;i<k;i++)
    {
        int temp=0;
        for(l=1;l<k + 1;l++)
        {
            if(mat[l][j] == '\0' || l == i)
            {
                continue;
            }
            if(compare(mat[i],mat[l])==0)
            {
                mat[l][j] = '\0';
                temp++;
            }
        }
    }
    j=0;
    for(i=0;i<k + 1;i++)
    {
        if(mat[i][j] == '\0')
            continue;
        else
            printf("%s ",mat[i]);
    }
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    removed(str);
    return 0;
}