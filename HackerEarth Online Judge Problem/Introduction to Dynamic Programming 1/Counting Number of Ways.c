#include<stdio.h>
long long int dp[102][10004];
int t,n,k;
int main()
{
    scanf("%d",&t);
    for(int i=1; i<=10000; i++)
        dp[1][i]=1;
    for(int i=1; i<=100; i++)
        dp[i][1]=1;
    for(int i=2; i<=100; i++)
    {
        for(int j=2; j<=10000; j++)
        {
            if(j<=i)
                dp[i][j]+=1;
            for(int x=1; x<=i; x++)
            {
                if(j-x>0)
                    dp[i][j]=(dp[i][j]+dp[i][j-x]);
            }
        }
    }
    while(t--)
    {
        scanf("%d%d",&n,&k);
        printf("%lld\n",dp[k][n]);
    }
    return 0;
}
