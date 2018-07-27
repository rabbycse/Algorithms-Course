/*                                    rabby.code
                                    Md.Golam Rabbani
                           Tablets - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */

#include <stdio.h>
 
 
int main() {
int n;
    scanf("%d",&n);
    int i,a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
 
     b[0]=1;
    for(i=1;i<n;i++)
        {if(a[i]<a[i-1])
            {
            while(a[i+1]<a[i] && i+1<n)
            {b[i]=1;
                i++;
            }
 
            b[i]=1;
             int j=i;
             while(j>0 && a[j-1]>a[j] && b[j-1]<b[j]+1)
                 {b[j-1]=b[j]+1;
                 j--;
             }
 
        }
        else if(a[i]==a[i-1])
            b[i]=1;
 
 
        else
            b[i]=b[i-1]+1;
 
    }
    long  sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    printf("%ld\n",sum);
    return 0;
}