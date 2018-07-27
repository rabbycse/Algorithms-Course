/*                                    rabby.code
                                    Md.Golam Rabbani
                             The Best Player - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include <stdio.h>
#include<string.h>

int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    struct fan
    {
        char name[21];
        int s;
    } f[n],temp;
    for(int i=0; i<n; i++)
    {
        scanf("%s %d",&f[i].name,&f[i].s);
    }
    for(int j=0; j<n-1; j++)
    {
        for(int k=0; k<n-j-1; k++)
        {
            if(f[k].s>f[k+1].s)
            {
                temp=f[k];
                f[k]=f[k+1];
                f[k+1]=temp;
            }
            else if(f[k].s==f[k+1].s)
            {
                if(strcmp(f[k].name,f[k+1].name)<0)
                {
                    temp=f[k];
                    f[k]=f[k+1];
                    f[k+1]=temp;
                }
            }

        }
    }
    int u=n-1;
    while(t>0)
    {
        printf("%s\n",f[u].name);
        t--;
        u--;
    }
    return 0;

}
