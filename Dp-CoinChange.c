#include <stdio.h>

int main()
{
    int i, j, a, n, min, sum;
    printf("Enter the total amount of change:");
    scanf("%d",&a);

    printf("\nEnter the size of coin:");
    scanf("%d",&n);

    int coin[n];
    printf("\nEnter the value of coin:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&coin[i]);
    }

    int dp[a+1],S[a+1];

    dp[0] = 0;
    S[0] = 0;

    for(j = 1; j <= a; j++)
    {
        min = 999;
        for(i = 0; i <= n; i++)
        {
            if(coin[i] <= j)
            {
                if(1 + dp[j - coin[i]] < min)
                {
                    min = 1 + dp[j - coin[i]];
                    sum = i;
                }
            }
        }
        dp[j] = min;
        S[j] = sum;
    }
    printf("\nMinimum no.of coins needed for amount %d = %d\n", a, dp[a]);

    printf("\nCoin Set:-\n");
    while(a > 0)
    {
        printf("Use of coin: %d\n", coin[S[a]]);
        a = a - coin[S[a]];
    }

    return 0;

}
