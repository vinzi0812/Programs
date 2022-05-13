#include <stdio.h>
void find_minor(int n,int mat[n][n],int minor[n-1][n-1],int r,int c)
{
    int i=0,j=0;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(row!=r && col!=c)
            {
                minor[i][j++]=mat[row][col];//adding elements in the minor matrix
                if(j==n-1)
                {
                    j=0;//resetting j=0 for next for outer for loop
                    i++;
                }
            }
        }
    }
}
int determinant(int n,int mat[n][n])
{
    int result = 0,sign = 1;
    int cofactor[n-1][n-1];//to store cofactor
    if(n == 1)//Base case
        return mat[0][0];
    else
    {
        for(int i = 0;i < n;i++)
        {
            find_minor(n,mat,cofactor,0,i);
            result += sign * mat[0][i] * determinant(n-1,cofactor);
            sign *= -1;
        }
    }
    return result;
}
int main()
{
    int n;
    printf("Enter the dimensions of the matrix: ");
    scanf("%d",&n);
    int mat[n][n];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    if(determinant(n,mat)==0)
        printf("It is a singular matrix");
    else
        printf("It is not a singular matrix");
    return 0;
}