/*                                    rabby.code
                                    Md.Golam Rabbani
                           Crazy Painter - https://www.hackerearth.com/submissions/rabby.code/
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
#define N  105
#define K  5
 
typedef long long ll;
typedef long double ld;
 
typedef struct { ll a, b, c; } ll2;
ll n,m;
ll a[N];
ll b[N];
 
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
 
int main() {
  ll t;
  ll i,j,k,d,l,r,x,y,z,p,q;
 
  char cc;
  ll c,h;
 
  t=1;
  scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld", &n);
 
    memset(a,0,sizeof(a));
    FI(i,1,26) {
      scanf("%lld", a+i);
    }
 
    m = n*12; r=0; q=0;
    x = m/26; y=m%26;
 
    FI(i,1,MIN(m,26)) {
      q+=a[i];
    }
    r=q;
 
    if (x>=2) {
      r+=(x-1)*q;
      r+=(x-1)*(x)*26/2;
    }
 
    if (x>=1) {
      q=0;
      FI(i,1,y) {
        q+=a[i];
      }
      r+=q + y*x;
    }
 
    printf("%lld\n", r);
  }
}