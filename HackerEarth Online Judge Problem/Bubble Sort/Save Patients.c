/*                                    rabby.code
                                    Md.Golam Rabbani
                             Save Patients - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
        if(a[i]<b[i])
        {
            flag=1;
        }

    }
    if(flag==1)
        printf("No");
    else
        printf("Yes");

}
