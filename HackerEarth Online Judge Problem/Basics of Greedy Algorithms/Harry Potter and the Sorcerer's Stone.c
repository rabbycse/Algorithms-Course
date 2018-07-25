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
#define N  9
#define K  2

typedef long long ll;
typedef long double ld;

ll n,m;
ll a[N][N];
ll c[N];
char s[N];

int main()
{
    ll t;
    ll i,j,k,d,l,r,x,y,p,q;
    ll xx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
    ll yy[8] = { -1,  1, -2,  2, 2,-2, 1,-1 };

    char cc;

    t=1;

    while(t--)
    {
        scanf("%lld %lld", &x, &y);
        scanf("%lld %lld", &p, &q);
        memset(a, -1, sizeof(a));
        a[x][y]=0;

        if (x==p && y==q)
        {
            puts("0");
            continue;
        }
        r=0;
        m=0;
        FI(r,0,50)
        {
            FI(i,1,8)
            {
                FI(j,1,8)
                {
                    if (a[i][j]==r)
                    {
                        FI(k,0,7)
                        {
                            l=i+xx[k];
                            d=j+yy[k];

                            if (l>=1 && l<=8 && d>=1 && d<=8 && a[l][d]==-1)
                                a[l][d]=r+1;

                            if (l==p && d==q)
                            {
                                m=1;
                                break;
                            }
                        }
                    }
                    if (m)
                        break;
                }
                if (m)
                    break;
            }
            if (m)
                break;
        }

        printf("%lld\n", r+1);
    }
}
