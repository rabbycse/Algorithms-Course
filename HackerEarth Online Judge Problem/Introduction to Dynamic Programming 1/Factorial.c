/*                                    rabby.code
                                    Md.Golam Rabbani
                           Factorial - https://www.hackerearth.com/submissions/rabby.code/
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
#define K  5
 
typedef long long ll;
typedef long double ld;
 
typedef struct { ll a, b, c; } ll2;
ll n,m;
ll a[N];
ll s;
 
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
  ll2 tt;
 
  t=1;
  scanf("%lld", &t);
 
  a[0]=1;
  FI(i, 1, N-1) {
    a[i]=a[i-1]*i % M;
  }
  while(t--) {
    scanf("%lld", &n);
 
    printf("%lld\n", a[n]);
  }
}