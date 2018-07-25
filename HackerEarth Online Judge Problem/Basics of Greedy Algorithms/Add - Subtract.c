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
 
ll n,m;
ll a[N];
//char s[N];
ll c[N];
 
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
  scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld %lld", &n, &k);
 
    memset(c, 0, sizeof(c));
    FI(i, 0, n-1) {
      scanf("%lld", a+i);
      c[a[i]]++;
    }
 
    x=M;
    FI(i, 1, 100) {
      p = c[i]; r=0; j=1; q=1;
      while(p<k && (i-j>0 || i+q<=100)) {
        if ((j*3<=q*5 || i+q>100) && i-j>0) {
          p += c[i-j];
          if (p>=k) {
            r+=(c[i-j]-(p-k))*3*j;
            break;
          } else {
            r+=c[i-j]*3*j;
            j++;
          }
        }
        if ((j*3>q*5 || i-j<=0) && i+q<=100) {
          p += c[i+q];
          if (p>=k) {
            r+=(c[i+q]-(p-k))*5*q;
            break;
          } else {
            r+=c[i+q]*5*q;
            q++;
          }
        }
      }
      //printf("%lld:%lld ", i, x);
      if (x > r && p>=k) x=r;
    }
 
    printf("%lld\n", x);
  }
}