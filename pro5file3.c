#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the row and column size:");
    scanf("%d %d",&row,&column);
    int i,j,arr[row][column];
    
    printf("Enter array's elememt:");
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("a[%d][%d]:-",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The transpose matrix is:");
    printf("\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}