/*                                    rabby.code
                                    Md.Golam Rabbani
                           Game of Colors - https://www.hackerearth.com/submissions/rabby.code/
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
#define N  105
#define K  5
 
typedef long long ll;
typedef long double ld;
 
typedef struct { ll a, b, c; } ll2;
ll n,m;
ll a[N][N];
ll b[N][N];
ll s[N][N][N][3];
 
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
  char ch[256];
  ll c,h;
 
  t=1;
  //scanf("%lld", &t);
 
  while(t--) {
    scanf("%lld", &n);
    scanf("%lld", &d);
 
    FI(i,1,n) {
      FI(j,1,n) {
        scanf("%lld", a[i]+j);
      }
    }
    memset(b, 0, sizeof(b));
 
    FI(k,0,100) {
      FI(i,0,n) {
        FI(j,0,2) {
          s[k][0][i][j]=0;
          s[k][i][0][j]=0;
        }
      }
    }
 
    FI(k,0,100) {
      if (k!=0) {
        FI(i,1,n) {
          FI(j,1,n) {
            if (k%a[i][j]==0) b[i][j]=(b[i][j]+1)%3;
            //printf("%lld ", b[i][j]);
          }
          //puts("");
        }
      }
 
      FI(i,1,n) {
        FI(j,1,n) {
          FI(l,0,2) {
            s[k][i][j][l]=s[k][i-1][j][l]+s[k][i][j-1][l]-s[k][i-1][j-1][l];
            if (b[i][j]==l) {
              s[k][i][j][l]++;
            }
            //printf("%lld ", s[k][i][j][l]);
          }
        }
        //puts("");
      }
    }
 
    ch['R']=0;
    ch['G']=1;
    ch['B']=2;
    FI(i,1,d) {
      scanf("%lld %lld %lld %lld %lld %c", &k, &x,&y, &p,&q, &cc);
 
      l=ch[cc];
      r = s[k][p][q][l] - s[k][p][y-1][l] - s[k][x-1][q][l] + s[k][x-1][y-1][l];
      printf("%lld\n", r);
    }
  }
}