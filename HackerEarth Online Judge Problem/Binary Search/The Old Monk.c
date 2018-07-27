/*                                    rabby.code
                                    Md.Golam Rabbani
                             The Old Monk - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include <stdio.h>

int main()
{
    int t,n,i,j,max,m,lb,ub,index,mid;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n],b[n];

        for(i=0; i<n; i++)
            scanf("%d",&a[i]);

        for(i=0; i<n; i++)
            scanf("%d",&b[i]);

        max=0;
        for(i=0; i<n; i++)
        {
            m=0;
            for(j=0; j<n; j++)
            {
                if(b[j]>=a[i])
                {
                    if(j>=i)
                        m=j-i;
                    else
                        m=0;
                    if(m>max)
                        max=m;
                }
                else
                    break;


            }



        }
        printf("%d\n",max);


    }
}
