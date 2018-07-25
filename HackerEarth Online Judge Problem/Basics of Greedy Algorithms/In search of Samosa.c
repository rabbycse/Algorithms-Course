#include<stdio.h>
int main()
{
    int n,k,c=0,sum=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++)
    {
        if((a[i]+sum)<=k)
        {
            sum=sum+a[i];
            c++;
        }
        else
            break;
    }
    printf("%d",c);
}

