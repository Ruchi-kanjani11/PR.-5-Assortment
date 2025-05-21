#include<stdio.h>
int main()
{
    int row,column,num1,num2,sum=0;
    printf("\n Enter the array's row size:");
    scanf("%d",&row);
    printf("\n Enter the array's column size:");
    scanf("%d",&column);
    int arr[row][column],i,j;
    printf("Enter array's element:");
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n Enter row number:");
    scanf("%d",&num1);
    printf("\n Elements of row %d: ",num1);
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(num1==i)
            {
                printf("%d ",arr[i][j]);
                sum+=arr[i][j];
            }
        }
    }
    printf("\n The sum of row %d is : %d",num1,sum);
    
    printf("\n Enter column number:");
    scanf("%d",&num2);
    printf("\n Elements of column %d: ",num2);
    sum=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
           if(num2==j)
           {
            printf("%d ",arr[i][j]);
            sum+=arr[i][j];
           } 
        }
    }
    printf("\n The sum of column %d is : %d",num2,sum);
    return 0;
}