/*                                    rabby.code
                                    Md.Golam Rabbani
                             Maximum Sum - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include<stdio.h>
main()
{
    long long n,sum=0,count=0,sum1=0,count1=1,min=-100000000000,counter=0;
    int i,a[100005];
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=0)
        {
            if(a[i]==0)
                counter++;

            sum=sum+a[i];
            count++;
        }

        else
        {
            if(min<=a[i])
                min=a[i];
        }
    }

    if(counter!=0 || sum>0)
        printf("%lld %lld\n",sum,count);

    else
        printf("%lld %lld\n",min,count1);

}
