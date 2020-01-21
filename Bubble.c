#include<stdio.h>

int main()
{
    int i,temp,j,n,arr[100];
    
     printf("Enter no of elemts\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("array before sorting\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    for(i=1;i<=n-1;i++)
        for(j=0;j<=n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

    printf("sorted array\n");
    for(i=0;i<=n-1;i++)
        printf("%d ",arr[i]);
    
    return 0;
}
