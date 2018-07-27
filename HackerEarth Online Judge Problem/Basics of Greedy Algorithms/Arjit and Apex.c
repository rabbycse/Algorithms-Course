/*                                    rabby.code
                                    Md.Golam Rabbani
                             Arjit and Apex  - https://www.hackerearth.com/submissions/rabby.code/
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
#define K  4
 
typedef long long ll;
typedef long double ld;
 
typedef struct { ll a, b; } ll2;
ll n,m;
ll2 a[N];
ll2 b[N];
ll s[N];
 
void swap(ll *a, ll *b) {
  ll r=*a;
  *a=*b;
  *b=r;
}
 
int compare(const void* a, const void* b) {
  ll2 l = *((ll2 *)a);
  ll2 r = *((ll2 *)b);
 
  if (l.a==r.a)
    return r.b - l.b;
 
  return l.a - r.a;
}
 
int main() {
  ll t;
  ll i,j,k,d,l,r,x,y,p,q;
 
  char cc;
  ll2 tt;
 
  t=1;
  scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld", &m);
    scanf("%lld", &n);
 
    FI(i,0,m-1) {
      scanf("%lld %lld", &p, &q);
      tt.a=p; tt.b=q;
      a[i]=tt;
    }
 
    qsort(a, m, sizeof(ll2), compare);
    FI(i,0,n-1) {
      scanf("%lld %lld", &p, &q);
      tt.a=p; tt.b=q;
      b[i]=tt;
    }
    qsort(b, n, sizeof(ll2), compare);
 
    scanf("%lld %lld", &p, &q);
    r=0; j=0; k=0;
    FI(i,0,m-1) {
      while(a[i].a < b[j].a) j++;
 
      if (a[i].a == b[j].a) {
        r++;
        j++;
      }
    }
    j=0;
    if (r>=p) {
      FI(i,0,m-1) {
        while(a[i].a < b[j].a) j++;
 
        if (a[i].a == b[j].a && a[i].b <= b[j].b) {
          k++;
          j++;
        }
      }
    }
    if (r>=p && k>=q) {
      puts("Great");
    } else if (r>=p) {
      puts("Good");
    } else
      puts(":(");
 
    //printf("%lld %lld\n", x, r);
  }
}