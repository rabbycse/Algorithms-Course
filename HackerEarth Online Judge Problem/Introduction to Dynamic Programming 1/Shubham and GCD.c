/*                                    rabby.code
                                    Md.Golam Rabbani
                           Shubham and GCD - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */

#include<stdio.h>
long gcd(long n1,long n2);
void main()
{
    long long sum=0;
    long n,i,j,a[100000];
    scanf("%ld",&n);
    for(i=0; i<n; i++)
        scanf("%ld",&a[i]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>j)
                continue;
            if(gcd(a[i],a[j])>1)
                sum+=(n-j)*(i+1);
        }
    }
    printf("%lld",sum);
}

long gcd(long n1,long n2)
{
    while(n1!=n2)
    {
        if(n1>n2)
            n1-=n2;
        else
            n2-=n1;
    }
    return n1;
}
