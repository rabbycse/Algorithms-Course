/*                                    rabby.code
                                    Md.Golam Rabbani
                           Tree tearing - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */

#include <stdio.h>

int main()
{
    int k,n,i,x,cnt=0;
    int arr[10001];
    int count[10001];
    scanf("%d",&k);
    for(i=0; i<10001; i++)
        count[i]=0;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
        scanf("%d",arr[i]);
    arr[1]=1;
    for(i=2; i<=n; i++)
    {
        x=i;
        while(x!=1)
        {
            count[x]++;
            x=arr[x];
        }
        printf("\n");
    }
    count[1]=n;
    for(i=n; i>=2; i--)
    {
        if(count[i]>=k)
        {
            cnt++;
            x=i;
            while(x!=1)
            {
                x=arr[x];
                count[x]-=count[i];

            }
        }
    }
    if(count[1]>=k)
        cnt++;
    printf("%d",cnt);
    return 0;
}
