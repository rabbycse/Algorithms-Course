#include <stdio.h>
 
int main()
{
	int i,j,n,sum=0,a,b;
	int si[n],ci[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&si[i]);
    }
    for(i=0;i<n;i++)
    {
    	scanf("%d",&ci[i]);
    }
    for(i = 0; i < n; ++i)
    {
    	for(j = i + 1; j < n; ++j)
        {
            if(si[i] < si[j])
            {
                a =  si[i];
 
                si[i] = si[j];
 
                si[j] = a;
			}
        }
    }
    for(i = 0; i < n; ++i)
    {
    	for(j = i + 1; j < n; ++j)
        {
            if(ci[i] < ci[j])
            {
                b =  ci[i];
 
                ci[i] = ci[j];
 
                ci[j] = b;
			}
        }
    }
    for(i=0;i<n;i++)
    {
    	sum=sum+(si[i]*ci[i]);
    }
    printf("%d",sum);
    return 0;
}