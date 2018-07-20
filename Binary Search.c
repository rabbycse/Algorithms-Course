#include<stdio.h>

int main()
{

    int X[10],Z,i,n,flag=0,l,h,mid,Xm;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("\nEnter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&X[i]);
    }

    printf("\nEnter the number to be search: ");
    scanf("%d",&Z);

    l=0,h=n-1;
    while(l<=h && flag == 0)
    {
        mid=(l+h)/2;
        Xm = X[mid];
        if(Xm<Z)
        {
            l=mid+1;
        }
        else if(Xm>Z)
        {
            h=mid-1;
        }
        else if(Xm=Z)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
        printf("\nThe number is found");
    else
        printf("\nThe number is not found");
    return 0;
}
