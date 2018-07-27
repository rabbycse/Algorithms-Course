/*                                    rabby.code
                                    Md.Golam Rabbani
                           Protect the Cities - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */

#include<stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int minx=1000000000,maxx=-1000000000,miny=1000000000,maxy=-1000000000;
        long long int x,y;
        long long int n;
        scanf("%lld",&n);
        while(n--)
        {
            scanf("%lld%lld",&x,&y);
            if(x>maxx)
                maxx=x;
            if(x<minx)
                minx=x;
            if(y>maxy)
                maxy=y;
            if(y<miny)
                miny=y;
        }
        long long int a=abs(maxx-minx);
        long long int b=abs(maxy-miny);
        if(a>b)
            printf("%lld",a*a);
        else
            printf("%lld",b*b);
        printf("\n");


    }
}
