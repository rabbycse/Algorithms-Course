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
#define K  2
 
typedef long long ll;
typedef long double ld;
 
ll n,m;
ll a[N];
char s[N];
char c[N];
 
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
 
    l=0; r=n-1;
    p=a[l]; q=a[r]*2;
    while(l+1<r) {
      if (p==q) {
        l++; r--;
        p=a[l]; q=a[r]*2;
      } else if (p>q) {
        p-=q;
        r--;
        q=a[r]*2;
      } else {
        q-=p;
        l++;
        p=a[l];
      }
    }
    printf("%lld %lld\n", l+1, n-l-1);
  }
}