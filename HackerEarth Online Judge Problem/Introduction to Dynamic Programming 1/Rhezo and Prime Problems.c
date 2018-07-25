int main()
{
    int n,i,j,temp,max;
    scanf("%d",&n);
    if(n==1){
        printf("0");
        return 0;
    }
    int dp[n+1][2],arr[n+1],upto[n+1],prime[n+1];
    for(i=0;i<=n;i++)prime[i] = 1;
    prime[0] = 0;
    prime[1] = 0;
    for(i=2;i<=sqrt(n);i++){
        if(prime[i]==0)continue;
        for(j=i*i;j<=n;j+=i){
            prime[j] = 0;
        }
    }
    memset(dp,0,2*(n+1)*sizeof(int));
    memset(arr,0,(n+1)*sizeof(int));
    memset(upto,0,(n+1)*sizeof(int));
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    upto[1] = arr[1];
    upto[2]  = arr[2] + arr[1];
    dp[2][1] = upto[2];
    upto[0] = arr[0];
    for(i=3;i<=n;i++){
        scanf("%d",&arr[i]);
        upto[i] = upto[i-1] + arr[i];
        temp = 0;
        max = 0;
        for(j=2;j<=i;j++){
            if(!prime[j])continue;
            temp = upto[i] - upto[i-j] + dp[i-j][0];
            if(temp>max)max =temp;
        }
        dp[i][1] = max;
        dp[i][0] = (dp[i-1][0]>dp[i-1][1]?dp[i-1][0]:dp[i-1][1]);
    }
    printf("%d",(dp[n][0]>dp[n][1]?dp[n][0]:dp[n][1]));
    return 0;
}