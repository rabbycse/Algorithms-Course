/*                                    rabby.code
                                    Md.Golam Rabbani
                             Colourful Toys  - https://www.hackerearth.com/submissions/rabby.code/
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
ll2 a[K];
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
 
  while(t--) {
    scanf("%lld", &x);
    scanf("%lld", &y);
    scanf("%lld", &z);
 
    for(i=0;i<4;i++) {
      scanf("%lld", &p);
      a[i].a=p;
      a[i].b=i;
    }
    a[0].c=3;
    a[1].c=3;
    a[2].c=2;
    a[3].c=6;
 
    for(i=0;i<3;i++) {
      for(j=i+1;j<4;j++) {
        if (a[i].a*a[i].c < a[j].a*a[j].c) {
          tt=a[i]; a[i]=a[j]; a[j]=tt;
        }
      }
    }
 
    k=0;
    for(i=0;i<4;i++) {
      if (a[i].b==0) {
        j = MIN(x,y);
        x-=j; y-=j;
        k+=j*a[i].a;
      } else if (a[i].b==1) {
        j = MIN(y,z);
        y-=j; z-=j;
        k+=j*a[i].a;
      } else if (a[i].b==2) {
        j = MIN(x, MIN(y,z));
        x-=j; y-=j; z-=j;
        k+=j*a[i].a;
      } else if (a[i].b==3) {
        k+=(x+y+z)*a[i].a;
        break;
      }
    }
 
    printf("%lld\n", k);
  }
}