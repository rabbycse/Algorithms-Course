#include<stdio.h>

int main()
{
    int a[50],n,i;

    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter a number: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int max = a[0];

    for(i=1; i<n; i++)
    {
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Maximum is = %d\n",max);

    int min = a[0];

    for(i=1; i<n; i++)
    {
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("Minimum is = %d\n",min);
}
