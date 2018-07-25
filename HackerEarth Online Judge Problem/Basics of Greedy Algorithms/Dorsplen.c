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
#define N  21
#define K  5
 
typedef long long ll;
typedef long double ld;
 
ll n,m;
ll a[N][K];
//char s[N];
//char c[N];
 
void swap(ll *a, ll *b) {
  ll r=*a;
  *a=*b; *b=r;
}
int main() {
  ll t;
  ll i,j,k,d,l,r,x,y,p,q;
  ll g,b;
 
  char cc;
 
  t=1;
  //scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld %lld %lld", &r, &g, &b);
 
    if (r>g) { swap(&r,&g); }
    if (g>b) { swap(&g,&b); }
    if (r>g) { swap(&r,&g); }
    // r<g<b;
 
    x = MIN(b, MIN( g + (b+1-g)/2, r + (g+1-r)/2 + (b+1-r)/2));
    printf("%lld\n", x);
  }
}