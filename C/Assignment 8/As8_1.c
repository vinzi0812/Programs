#include<stdio.h>
typedef struct  family
{
    char wife_name[20];
    int n_child;
    char child_names[10][20];
}family;
typedef union details
{
    family fam;
    char hobby[30];
}details;
typedef struct member
{
    char name[20];
    int age;
    char addr[100];
    char active,married;
    details det;

}member;
void input(member c[2])
{
    for(int i=0;i<2;i++)
    {
        printf("\n\nEnter the name of the member: ");
        scanf(" %s",c[i].name);
        printf("Enter their age: ");
        scanf("%d",&c[i].age);
        printf("Enter their address: ");
        scanf(" %[^\n]",c[i].addr);
        printf("Enter active status (Y/N): ");
        scanf(" %c",&c[i].active);
        printf("Enter Marital Status (Y/N): ");
        scanf(" %c",&c[i].married);
        if(c[i].married=='Y')
        {
            printf("Enter name of the wife: ");
            scanf(" %s",c[i].det.fam.wife_name);
            printf("Enter the number of children: ");
            scanf("%d",&c[i].det.fam.n_child);
            for(int i=0;i<c[i].det.fam.n_child;i++)
            {
                printf("Enter name of the children: ");
                scanf(" %s",c[i].det.fam.child_names[i]);
            }
        }
        else
        {
            printf("Enter the hobby of the member: ");
            scanf(" %[^\n]",c[i].det.hobby);
        }
    }
}
int main()
{
    member c[2];
    input(c);
    printf("The list of married active players and their wives is as follows:\n");
    printf("Name\tWife\n");
    for(int i=0;i<2;i++)
    {
        if(c[i].active=='Y' && c[i].married=='Y')
            printf("%s\t%s",c[i].name,c[i].det.fam.wife_name);
    }
    return 0;
}