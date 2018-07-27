/*                                    rabby.code
                                    Md.Golam Rabbani
                             Shubham and Xor - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    {
        int t;
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }

    }
    int count=0;
    for(int i=0; i<n; i++)
    {
        i++;
        if(a[i]==a[i-1])
            count++;
    }
    printf("%d",count);
}
