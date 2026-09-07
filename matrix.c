#include<stdio.h>
void display(int rows, int cols, int matrix[rows][cols]);
int main()
{
    int rows, cols, i, j;
    printf("Enter number of row");
    scanf("%d",&rows);

    printf("enter number of columns");
    scanf("%d",&cols);
     int matrix[rows][cols];
     printf("\nenter elements");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {scanf("%d",&matrix[i][j]);}
    }
    display(rows, cols,matrix);
    return 0;
}
void display(int rows, int cols, int matrix[rows][cols])
{
    int i, j;
    printf("\nentered matrix");
    for (i = 0;i < rows;i++)
    {
        printf("\n");
        for (j = 0;j < cols;j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
    }
}  
