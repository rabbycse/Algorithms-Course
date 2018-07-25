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
#define K  4
 
typedef long long ll;
typedef long double ld;
 
ll n,m;
ll a[N];
ll b[N];
ll s[N];
 
void swap(ll *a, ll *b) {
  ll r=*a;
  *a=*b;
  *b=r;
}
 
int compare(const void* a, const void* b) {
  ll l = *((ll *)a);
  ll r = *((ll *)b);
  return l - r;
}
 
int main() {
  ll t;
  ll i,j,k,d,l,r,x,y,p,q;
 
  char cc;
 
  t=1;
  scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld", &n);
 
    FI(i,0,n-1) {
      scanf("%lld", a+i);
    }
 
    //qsort(a, n, sizeof(ll), compare);
 
    r=0; x=M;
    FI(i,1,n-1) {
      r+=MAX(a[i],a[i-1]);
    }
 
    printf("%lld\n", r);
  }
}