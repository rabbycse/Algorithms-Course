
/** My online Submit Link: https://www.hackerearth.com/submission/18420057/
**/



#include<stdio.h>
#include<string.h>
main()
{
    int t,i,j;
    char str[100];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",str);
        j=0;
        while(j < strlen(str))
        {
            if(str[j] == str[j+1])
                j++;
            else
                printf("%c",str[j++]);
            if(j == (strlen(str)-1))
                printf("%c",str[j++]);
        }
        printf("\n");
    }
}
