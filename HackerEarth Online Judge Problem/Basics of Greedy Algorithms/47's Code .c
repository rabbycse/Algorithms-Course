/*                                    rabby.code
                                    Md.Golam Rabbani
                             47's Code  - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */


#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i =0; i<t; i++)
    {
        int n,k,c=0;
        scanf("%d",&n);
        scanf("%d",&k);
        int a[n];
        for(int j=0; j<n; j++)
            scanf("%d",&a[j]);

        int m=0;
        while(m<n-1)
            if(a[m]<a[m+1] && c<k)
            {
                int temp =a[m+1];
                a[m+1] = a[m];
                a[m] = temp;
                c++;
                if(c==k)
                    break;
                m=0;
            }
            else
                m++;

        for(int j=0; j<n; j++)
            printf("%d",a[j]);

        printf("\n");
    }
    return 0;
}
