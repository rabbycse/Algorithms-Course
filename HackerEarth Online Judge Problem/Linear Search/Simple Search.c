/*                                    rabby.code
                                    Md.Golam Rabbani
                             Simple Search - https://www.hackerearth.com/submissions/rabby.code/
                                         2018
                                    */

#include<stdio.h>
int main()
{
    int a[100],i,k,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0; i<n; i++)
    {
        if(a[i]==k)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
