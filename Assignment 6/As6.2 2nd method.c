#include<stdio.h>
void print(int n,int mat[n][2])
{
    for(int i=0;i<n;i++)
    {
        if(mat[i][0]!=0)
        {
            printf("%d\t%d\n",mat[i][0],mat[i][1]);
            for(int j=0;j<n;j++)
            {
                if(i!=j && mat[j][0]!=0 && mat[j][0]==mat[i][0])
                {
                    printf("\t%d\n",mat[j][1]);
                    mat[j][0]=0;
                }
            }
            mat[i][0]=0;
        }
    }
}
int main()
{
    int year,n;
    printf("Enter current year: ");
    scanf("%d",&year);
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    int mat[n][2];
    for(int i=0;i<n;i++)
    {
        printf("Enter Employee Number and current age: ");
        scanf("%d %d",&mat[i][1],&mat[i][0]);
        mat[i][0] = year + 65 - mat[i][0];
    }
    print(n,mat);
    return 0;
}
