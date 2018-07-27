/*                                    rabby.code
                                    Md.Golam Rabbani
                            Eat Or Not  - https://www.hackerearth.com/submissions/rabby.code/
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
#define N  21
#define K  5
 
typedef long long ll;
typedef long double ld;
 
ll n,m;
ll a[N][K];
//char s[N];
//char c[N];
 
int find(int k, int b, int c, int d, int e) {
  if (a[0][0]==b && a[0][1]==c && a[0][2]==d && a[0][3]==e)
    return 1;
  if (k>n) return 0;
 
  if (find(k+1, b+a[k][0], c+a[k][1], d+a[k][2], e+a[k][3]))
    return 1;
  if (find(k+1, b,c,d,e))
    return 1;
 
  return 0;
}
 
int main() {
  ll t;
  ll i,j,k,d,l,r,x,y,p,q;
 
  char cc;
 
  t=1;
  //scanf("%lld", &t);
 
  while(t--) {
    FI(i,0,3) {
      scanf("%lld", a[0]+i);
    }
 
    scanf("%lld", &n);
 
    FI(i,1,n) {
      FI(j,0,3) {
        scanf("%lld", a[i]+j);
      }
    }
 
    if (find(1, 0, 0, 0, 0)) {
      puts("YES");
    } else
      puts("NO");
  }
}