/*                                    rabby.code
                                    Md.Golam Rabbani
                           Studious Little Jhool  - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */



#include <stdio.h>
int dp[200];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        for(int i=1; i<10; ++i)
            dp[i] = -1;
        dp[11] = -1;
        int n;
        scanf("%d",&n);
        dp[10] =1;
        dp[12] =1;
        for(int i=13; i<=n; ++i)
        {
            if(dp[i-10]== -1 && dp[i-12]== -1)
                dp[i] = -1;
            else if(dp[i-10]== -1)
                dp[i] = dp[i-12]+1;
            else if(dp[i-12]== -1)
                dp[i] = dp[i-10] +1;
            else
                dp[i] =(dp[i-10]+1, dp[i-12]+1);
        }
        printf("%d\n",dp[n]);
    }
}
