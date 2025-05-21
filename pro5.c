#include<stdio.h>
int main()
{
    int size;
    printf("Enter the array's size:");
    scanf("%d",&size);
    int arr[size],i;

    printf("Enter array's element:");
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("arr[%d]:- ",i);
        scanf("%d",&arr[i]);
     
    }

    

    printf("\n Negative elements from an array: ");
    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
        
    }
        return 0;
}