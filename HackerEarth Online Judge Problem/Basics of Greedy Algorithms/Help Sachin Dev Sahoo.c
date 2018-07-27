/*                                    rabby.code
                                    Md.Golam Rabbani
                            Help Sachin Dev Sahoo  - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */


#include<string.h>
#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        char s[1000];
        scanf("%s",&s);
        scanf("%d",&k);
        int l=strlen(s),j=0,count=0,flag=0;
        while(j<=l-k)
        {
            if(s[j]=='0')
            {
                for(int m=j; m<j+k; m++)
                {
                    if(s[m]=='0')
                        s[m]='1';
                    else
                        s[m]='0';
                }
                count++;
            }
            j++;
        }
        for(int p=0; p<l; p++)
        {
            if(s[p]=='0')
            {
                printf("-1\n");
                flag=-1;
                break;
            }
        }
        if(flag==0)
            printf("%d\n",count);
    }

    return 0;
}
