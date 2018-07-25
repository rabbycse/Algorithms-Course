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
    scanf("%lld", &k);
    scanf("%lld", &m);
 
    FI(i,1,n) {
      scanf("%lld", a+i);
    }
 
    r=MA;
    FI(i,1,n) {
      p=0;
      FI(j,1,a[i]) {
        //if (j!=a[i]) p+=k;
        p+=k;
        scanf("%lld", &q);
        p+=q;
        if (j!=a[i]) p+=m;
      }
      if (r>p) { r=p; x=i; }
    }
 
    printf("%lld %lld\n", x, r);
  }
}