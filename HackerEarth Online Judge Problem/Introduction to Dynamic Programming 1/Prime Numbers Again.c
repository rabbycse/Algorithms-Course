#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define ll long long int
#define IN_M 1061109567
#define get getchar

int min(int a,int b)
{
    return (a<b) ? a:b;
}
int sort(int *x,int *y )
{
    return (int) (*x - *y);

}


ll dp[10005];

int main()
{
    ll t;
    scanf("%lld",&t);

    ll prime[10005];
    prime[0] = 2;
    ll k = 1;


    for (ll i = 3; i <= 10000; i++)
    {
        ll fl = 0;

        for (ll j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                fl = 1;
                break;
            }
        }

        if (fl == 1)
        {

        }
        else
        {
            prime[k] = i;
            k++;
        }
    }


    prime[k] = 4;
    k++;
    prime[k] = 27;
    k++;
    prime[k] = 3125;
    k++;

    sort(prime, prime + k);

    dp[0] = 0;
    dp[1] = 1e9;


    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 1;
    dp[5] = 1;

    for (ll i = 6; i <= 10000; i++)
    {
        dp[i] = 1e9;

        for (ll j = 0; j < k; j++)
        {

            if (i >= prime[j])
            {
                dp[i] = min(dp[i], dp[i - prime[j]] + 1);
            }

        }


    }

    while (t--)
    {

        ll n;
        scanf("%lld",&n);

        ll ct = 0;

        printf("%lld\n",dp[n]);



    }

    return 0;
}
