#include <stdio.h>
long a[1000005],b[1000005];
int max(int a, int b){
    return (a>b) ? a:b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l;
        scanf("%d",&l);
        for(int i=1; i<l; ++i)
        {
            scanf("%li",&a[i]);
        }
        for(int i=1; i<l; ++i)
        {
            scanf("%li",&b[i]);
        }
        long mx = l;
        for(int i=1; i<l; ++i)
        {
            mx = max(mx,i+max(a[i],b[i]));
        }
        printf("%li",mx);
    }
}
