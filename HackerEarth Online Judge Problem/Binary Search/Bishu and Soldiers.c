/*                                    rabby.code
                                    Md.Golam Rabbani
                             Bishu and Soldiers - https://www.hackerearth.com/rabby.code/
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
    int i,j,n1,n2,sum,count;
    scanf("%d",&n1);
    int *a=malloc(sizeof(int) *n1);

    for(i=0; i<n1; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    int *b=malloc(sizeof(int) *n2);
    for(j=0; j<n2; j++)
    {
        scanf("%d",&b[j]);
    }
    for(j=0; j<n2; j++)
    {
        count=0;
        sum=0;
        for(i=0; i<n1; i++)
        {
            if(b[j]>=a[i])
            {
                count++;
                sum=sum+a[i];
            }
        }
        printf("%d ",count);
        printf("%d\n",sum);
    }
    return 0;
}
