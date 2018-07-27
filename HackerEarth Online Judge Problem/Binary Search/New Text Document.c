/*                                    rabby.code
                                    Md.Golam Rabbani
                             Help Fredo - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    double proot=1.0;
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
        proot=proot*pow(a[i],1.0/n);
    }
    printf("%lld",(int)proot+1);
    return 0;
}
