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
#define N  1005
#define K  4
 
typedef long long ll;
typedef long double ld;
 
ll n,m;
ll a[N];
ll s[N][K];
// char s[N];
 
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
  ll g,b;
 
  char cc;
 
  t=1;
  //scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld", &n);
 
    memset(s,0,sizeof(s));
    FI(i,0,n-1) {
      scanf("%lld", a+i);
      s[i+1][0]=s[i][0];
      if (a[i]==0) {
        s[i+1][0]++;
      } else if (a[i]<3) {
        if (s[i][a[i]]==0) {
          s[i+1][a[i]]=1;
        } else {
          s[i+1][0]++;
        }
      } else {
        if (s[i][1]==0 && s[i][2]==1) {
          s[i+1][1]=1;
        } else if (s[i][1]==1 && s[i][2]==0)
          s[i+1][2]=1;
      }
 
    }
 
    printf("%lld\n", s[n][0]);
  }
}