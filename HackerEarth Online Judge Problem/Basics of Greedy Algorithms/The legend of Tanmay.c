/*                                    rabby.code
                                    Md.Golam Rabbani
                           The legend of Tanmay - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define FI(i,s,n) for(i=s;i<=n;i++)
#define FD(i,n,s) for(i=n;i>=s;i--)
#define MA 1000000000000000000
#define M  1000000007
#define MM 2000000000
#define N  100005
#define K  4

typedef long long ll;
typedef long double ld;

ll n,m;
ll a[N];
ll b[N];
ll s[N];

void swap(ll *a, ll *b)
{
    ll r=*a;
    *a=*b;
    *b=r;
}

int compare(const void* a, const void* b)
{
    ll l = *((ll *)a);
    ll r = *((ll *)b);
    return l - r;
}

int main()
{
    ll t;
    ll i,j,k,d,l,r,x,y,p,q;

    char cc;

    t=1;
    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld", &n);

        FI(i,0,n-1)
        {
            scanf("%lld", a+i);
        }

        qsort(a, n, sizeof(ll), compare);
        p=1;
        q=1;
        d=0;
        x=-M;
        y=-1;
        r=0;
        k=0;
        FI(i,0,n-1)
        {
            if (a[i]<0)
            {
                q=q*a[i];
                if (q>0)
                    x=q;
                if (q<0)
                    y=q;
                k++;
            }
            else if (a[i]>0)
            {
                p=p*a[i];
                d=p;
            }
            else
            {
                r++;
            }
        }

        if (d==0)
            p=MAX(a[n-1], x);
        else if (x==-M)
            p = d;
        else
            p = d * x;

        if (k==0)
            q=a[0];
        else if (d==0)
            q = y;
        else
            q = y*d;

        printf("%lld %lld\n", p, q);
    }
}
