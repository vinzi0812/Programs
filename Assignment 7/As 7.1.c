#include<stdio.h>
int vowels(char c)
{
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return 1;
    else
            return 0;
}
int consonant(char c)
{
    if(vowels(c)==0 && ((c>=65 && c<=90) || (c>=97 && c<=122)))
        return 1;
    else
        return 0;
}
int words(char str[])
{
    int count=0;
    for(int i=0;i<str[i]!=0;i++)
        if(str[i]==' ')
            count++;
    return count+1;
}
int main()
{
    char str[100];
    int i, vcount=0, ccount=0;
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(vowels(str[i])==1)
            vcount++;
        else if(consonant(str[i])==1)
            ccount++;
    }
    int  word=words(str);
    printf("No of vowels : %d\n",vcount);
    printf("No of consonants : %d\n",ccount);
    printf("No of characters : %d\n",vcount+ccount);
    printf("Length of the string : %d\n",i);
    printf("No of words : %d\n",word);
    return 0;
}