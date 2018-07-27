             /*                                    rabby.code
                                                 Md.Golam Rabbani
                                          Monk Takes a Walk - https://www.hackerearth.com/submissions/rabby.code/
                                                    2018
                                                 */

#include<stdio.h>
int main()
{
    int t,i,j,count;
    char str[1000000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        count = 0;
        scanf("%s",str);
        for(j=0; str[j]!='\0' ; j++)
        {
            if(str[j]=='A'||str[j]=='E'||str[j]=='I'||str[j]=='O'||str[j]=='U'
            ||str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
                count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
