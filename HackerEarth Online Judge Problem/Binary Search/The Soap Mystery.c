/*                                    rabby.code
                                    Md.Golam Rabbani
                             The Soap Mystery - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int i,n,j,k,t,count=0;
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int i= 0; i< n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        count=0;
        scanf("%d",&k);
        for(j=0; j<n; j++)
        {
            if(a[j]<k)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
