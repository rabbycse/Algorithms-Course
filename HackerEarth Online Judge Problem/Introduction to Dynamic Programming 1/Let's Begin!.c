#include<stdio.h>
#define ll long long
int main()
{
    ll no;
    scanf("%llu",&no);
    while(no--)
    {

        ll q;
        scanf("%llu",&q);
        ll ans=0;
        while(q)
        {
            if((q>=7)&&(q%7==1)&&q/7>1)
            {
                ans=ans+(q/7)-1;
                q=(q%7)+7;
            }
            if((q>=7)&&(q%7!=1))
            {
                ans+=q/7;
                q=q%7;

            }
            if((q>=5)&&(q%5==1)&&q/5>1)
            {
                ans=ans+(q/5)-1;
                q=(q%5)+5;
            }
            if((q>=5)&&(q%5!=1))
            {
                ans+=q/5;
                q=q%5;

            }
            if((q>=3)&&(q%3==1)&&q/3>1)
            {
                ans=ans+(q/3)-1;
                q=(q%3)+3;
            }
            if((q>=3)&&(q%3!=1))
            {
                ans+=q/3;
                q=q%3;

            }
            if((q>=2)&&(q%2==1)&&q/2>1)
            {
                ans=ans+(q/2)-1;
                q=(q%2)+2;
            }
            if(q>=2&&(q%2!=1))
            {
                ans+=q/2;
                q=q%2;

            }
            if(q==1)
                break;
        }
        if(q<=0)
            printf("%llu\n",ans);
        else
             printf("-1");
    }
    return 0;

}
