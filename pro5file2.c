#include<stdio.h>
int main()
{
    int row,column;
    printf("Enter the array's row: ");  
    scanf("%d",&row);
    printf("Enter the array's column: ");
    scanf("%d",&column);
    int arr[row][column],i,j,max;

     printf("Enter array's element:");
     printf("\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("arr[%d][%d]:-",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    
     max=arr[0][0];
     for(i=0;i<row;i++)
     {
        for(j=0;j<column;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
            
        }
     }
        
        printf("\n The largest element is=%d",max);
        return 0;


}