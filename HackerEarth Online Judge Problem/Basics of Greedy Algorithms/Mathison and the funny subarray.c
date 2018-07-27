/*                                    rabby.code
                                    Md.Golam Rabbani
                            Mathison and the funny subarray - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x,max1=0;
    scanf("%d",&n);
    int F[100000]= {0},L[100000]= {0};
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(F[x]==0)
        {
            F[x]=i;
        }
        L[x]=i;
    }
    for(i=1; i<=100000; i++)
    {
        if((L[i]-F[i]+1)>max1)
        {
            max1=L[i]-F[i]+1;
        }
    }
    printf("%d\n",max1);
    return 0;
}
