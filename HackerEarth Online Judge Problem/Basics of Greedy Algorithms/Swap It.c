
/** My Online Submit Link: https://www.hackerearth.com/submission/18424958/
**/



#include<stdio.h>

void swap(int *a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n,k,t;
    scanf("%d",&t);
    for(int p=0; p<t; p++)
    {
        scanf("%d%d",&n,&k);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        int j=0;
        while(k>0&&j<n)
        {
            int min1=j;
            for(int i=j+1; i<=k+j&&i<n; i++)
            {
                if(a[i]<a[min1])
                    min1=i;
            }
            for(int i=min1; i>j; i--)
            {
                swap(&a[i],&a[i-1]);
            }
            k=k-(min1-j);
            j++;
        }
        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    
}
