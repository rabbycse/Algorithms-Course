#include<stdio.h>

int main()
{
    int X[10],i,n,Z,flag=0;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("\nEnter the elements of the array: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&X[i]);
    }

    printf("\nEnter the number to be search: ");
    scanf("%d",&Z);

    for(i=0;i<n;i++)
    {
        if(Z==X[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("\nThe number is found and at index is -> %d",i);
    else
        printf("\nThe number is not found");

    return 0;
}
