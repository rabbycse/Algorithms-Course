/*                                    rabby.code
                                    Md.Golam Rabbani
                             Discover the Monk - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include <stdio.h>

int main()
{
    long int n,arr[100000],q,q1[100000],x,beg=1,mid,end,i,flag,j;

    scanf("%ld%ld",&n,&q);
    for(i=0; i<n; i++)
    {
        scanf("%ld",&arr[i]);
    }
    end=n;
    mid=(beg+end)/2;
    for(i=0; i<q; i++)
    {
        scanf("%ld",&q1[i]);
    }
    for(i=0; i<q; i++)
    {
        flag=0;
        for(j=0; j<n; j++)
        {
            if(q1[i]==arr[j])
            {
                flag=1;
                printf("YES\n");
                break;
            }
        }
        if(flag==0)
        {
            printf("NO\n");
        }
    }

    return 0;
}
