/*                                    rabby.code
                                    Md.Golam Rabbani
                            Little Monk's interviews - https://www.hackerearth.com/submissions/rabby.code/
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
#define MA 1000000000000000000 // 1e18
#define M  1000000007
#define MM 2000000000
#define N  100005
#define K  1000005
 
typedef long long ll;
typedef long double ld;
 
typedef struct { ll a, b, c; } ll2;
ll n,m;
ll2 a[K];
ll b[N];
//ll s[N];
 
void swap(ll *a, ll *b) {
  ll r=*a;
  *a=*b;
  *b=r;
}
 
int compare(const void* a, const void* b) {
  ll2 l = *((ll2 *)a);
  ll2 r = *((ll2 *)b);
 
  return r.c - l.c;
}
 
ll root(ll l) {
  while(b[l]!=l) {
    b[l]=b[b[l]];
    l=b[l];
  }
 
  return l;
}
 
ll uunion(ll l, ll r) {
  ll rl, rr;
  rl = root(l);
  rr = root(r);
 
  if (rl!=rr) {
    b[rr] = rl;
    return 1;
  } else
    return 0;
}
 
int main() {
  ll t;
  ll i,j,k,d,l,r,x,y,p,q;
 
  char cc;
  ll2 tt;
 
  t=1;
  scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld", &n);
    scanf("%lld", &m);
 
    FI(i,0,m-1) {
      scanf("%lld %lld %lld", &p, &q,&r);
      tt.a=p; tt.b=q; tt.c=r;
      a[i]=tt;
    }
 
    qsort(a, m, sizeof(ll2), compare);
 
    FI(i,1,n) {
      b[i]=i;
    }
    r=0; j=0; k=0;
    FI(i,0,m-1) {
      if (uunion(a[i].a, a[i].b)==1) {
        r=r+a[i].c;
        k++;
      }
      //if (k>=n-1) break;
    }
 
    printf("%lld\n", r);
  }
}