/*                                    rabby.code
                                    Md.Golam Rabbani
                             Array's force  - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */


#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int a[100000];
        scanf("%lld", &a[0]);
        scanf("%lld", &a[1]);
        long long int n;
        scanf("%lld", &n);

        long long int m;
        scanf("%lld", &m);

        long long int i;
        for(i=2; i<n; i++)
        {
            a[i]=(a[i-1]+a[i-2])%m;
        }
        long long int max=0;
        for(i=0; i<n; i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }

        long long int b[100000]= {0};
        for(i=0; i<n; i++)
        {
            b[a[i]]++;
        }
        long long int k=0;
        for(i=0; i<=max; i++)
        {
            if(b[i]!=0)
            {
                k+=b[i]*b[i];

            }
        }
        printf("%lld\n", k);
    }
    return 0;
}
