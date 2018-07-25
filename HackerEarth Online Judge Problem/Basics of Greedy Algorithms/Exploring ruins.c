
/** My Online Submit Link: https://www.hackerearth.com/submission/18419789/
**/



#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char c[51];
    scanf("%s",c);

    if(c[0]=='?' && (c[1]=='b' || c[1]=='?' || c[1]=='\0'))
    {
        c[i]='a';
    }
    if(c[0]=='?' && c[1]=='a')
    {
        c[i]='b';
    }

    for(i=1; c[i]!='\0'; i++)
    {

        if(c[i]=='?'&&c[i-1]!='a'&&c[i+1]!='a')
            c[i]='a';
        if(c[i]=='?'&&(c[i-1]=='a'||c[i+1]=='a'))
            c[i]='b';
    }
    printf("%s",c);
    return 0;
}
