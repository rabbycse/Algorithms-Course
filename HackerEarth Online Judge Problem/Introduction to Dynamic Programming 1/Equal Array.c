#include <stdio.h>
#define ll long long int

int min(int a,int b){
    return (a<b) ? a:b;

}

int main() {
    ll t;
    scanf("%lld",&t);
    ll sum[100005];
    ll arr[100005];

    while (t--) {
        ll n;
        scanf("%lld",&n);

        ll tot = 0;

        for (ll i = 1; i <= n; i++) {
            scanf("%lld",&arr[i]);
            tot += arr[i];
        }

        sum[1] = arr[1];
        for (ll i = 2; i <= n; i++) {
            sum[i] = sum[i - 1] + arr[i];
        }

        ll mini = -1;

        for (ll i = 1; i <= n; i++) {
            if (tot - sum[i] >= sum[i]) {
                if (mini == -1) {
                    mini = tot - (2 * sum[i]);
                } else {
                    mini = min(mini, tot - (2 * sum[i]));
                }
            }
        }

        printf("%lld",mini);

    }
}
