/*                                    rabby.code
                                    Md.Golam Rabbani
                             Square Transaction - https://www.hackerearth.com/submissions/rabby.code/
                                         2018
                                    */

#include<stdio.h>
main()
{
    long long t,a[100001],q,b[100001],i,s=0,j;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
        scanf("%lld",&a[i]);
    scanf("%lld",&q);
    for(i=0; i<q; i++)
        scanf("%lld",&b[i]);
    for(i=0; i<q; i++)
    {
        s=0;
        for(j=0; j<t; j++)
        {
            s=s+a[j];
            if(s>=b[i])
            {
                break;
            }
        }
        if(j==t)
            printf("-1\n");
        else
            printf("%lld\n",j+1);
    }
}
