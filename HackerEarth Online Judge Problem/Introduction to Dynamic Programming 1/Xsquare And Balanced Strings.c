
/** My Online Submit Link: https://www.hackerearth.com/submission/18456298/
**/




#include <stdio.h>

int main()
{
    char s[100006],c;
    int i,t,j,k;
    scanf("%d",&t);
    while((c= getchar()) != '\n' && c != EOF)
        fflush(stdin);

    while(t--)
    {
        gets(s);
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i]==5)
                continue;
            for(j=i+1,k=0; s[j]!='\0'; j++)
            {
                if(s[i]==s[j])
                {
                    k=1;
                    s[j]=5;
                    break;
                }
            }
            if(k==0)
            {
                printf("-1\n");
                goto here;
            }

        }
        printf("1\n");
        here:
        continue;
    }
    return 0;
}
