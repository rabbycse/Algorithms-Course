/*                                    rabby.code
                                    Md.Golam Rabbani
                             Counting Triangles - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include<stdio.h>
#define llu unsigned long long int
long long int comp(const void* x,const void* y)
{
    llu *xx=(llu*)x;
    llu *yy=(llu*)y;
    long long int result=*xx-*yy;
    return result;
}

int main()
{
    int n,i,j;
    scanf("%d",&n);
    llu a[n][3];
    for(i=0; i<n; i++)
    {
        scanf("%llu%llu%llu",&a[i][0],&a[i][1],&a[i][2]);
        qsort(a[i],3,sizeof(llu),comp);
    }
    int tc,count=0;
    for(i=0; i<n; i++)
    {
        if(a[i][0]==-1)
            continue;
        tc=0;
        for(j=i+1; j<n; j++)
        {
            if(a[i][0]==a[j][0] && a[i][1]==a[j][1] && a[i][2]==a[j][2])
            {
                a[j][0]=-1;
                tc++;
            }
        }
        if(tc>0)
            a[i][0]=-1;
    }
    for(i=0; i<n; i++)
    {
        if(a[i][0]!=-1)
            count++;
    }
    printf("%d",count);
}
