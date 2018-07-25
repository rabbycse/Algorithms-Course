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
#define K  55
 
typedef long long ll;
typedef long double ld;
 
ll n,m;
ll a[N];
ll c[K];
// char s[N];
 
void swap(ll *a, ll *b) {
  ll r=*a;
  *a=*b;
  *b=r;
}
 
int main() {
  ll t;
  ll i,j,k,d,l,r,x,y,p,q;
  ll g,b;
 
  char cc;
 
  t=1;
  //scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld %lld", &n, &m);
 
    FI(i, 1, m) {
      scanf("%lld", c+i);
    }
 
    x=0;
    FI(i, 0, n-1) {
      scanf("%lld", &k);
 
      x = x + c[k] - (x%c[k]);
      for(j=x;;j+=c[k]) {
        p=1;
        FI(l, k+1, m) {
          if (j%c[l]==0) {
            p=0;
            break;
          }
        }
        if (p==1) break;
      }
      x=a[i]=j;
    }
 
    // FI(i, 0, n-1) {
    //   printf("%lld ", a[i]);
    // }
    // puts("");
    printf("%lld\n", a[n-1]);
  }
}