/*                                    rabby.code
                                    Md.Golam Rabbani
                             Easy Going.(Very Easy) - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j;
        scanf("%d%d",&n,&m);
        int a[n];
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[j]>a[i])
                {
                    int temp;
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int max=0,min=0,ans=0;
        for(i=m; i<n; i++)
            max=max+a[i];
        for(i=0; i<n-m; i++)
            min=min+a[i];

        ans=max-min;
        printf("%d\n",ans);
    }
    return 0;
}
