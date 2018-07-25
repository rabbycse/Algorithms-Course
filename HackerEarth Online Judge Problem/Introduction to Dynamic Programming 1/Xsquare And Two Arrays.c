
/** My Online Submit Link: https://www.hackerearth.com/submission/18421642/
**/



#include<stdio.h>
#define li long int
int main()
{
    li n,q,i;
    scanf("%ld%ld",&n,&q);
    li a[n],b[n];
    for(i=1; i<=n; i++)
        scanf("%ld",&a[i]);
    for(i=1; i<=n; i++)
        scanf("%ld",&b[i]);
    while(q--)
    {
        li ch,l,r,sum=0,ctr=0;
        scanf("%d",&ch);
        scanf("%ld%ld",&l,&r);
        if(ch==1)
        {
            for(i=l; i<=r; i++)
            {
                if(ctr%2==0)
                    sum+=a[i];
                else
                    sum+=b[i];
                ctr++;
            }
            printf("%ld\n",sum);
        }
        else if(ch==2)
        {
            for(i=l; i<=r; i++)
            {
                if(ctr%2==0)
                    sum+=b[i];
                else
                    sum+=a[i];
                ctr++;
            }
            printf("%ld\n",sum);
        }
    }
}
