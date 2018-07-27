/*                                    rabby.code
                                    Md.Golam Rabbani
                             Manna's First Name - https://www.hackerearth.com/submissions/rabby.code/
                                         2018
                                    */

#include<stdio.h>
int main()
{
    long long int t,i, flag = 0, count= 0;
    char s[155];
    scanf("%lld",&t);
    while(t--)
    {
        flag=0,count=0;
        scanf("%s",&s);
        for(i=0; s[i]!='\0'; i++)
        {
            if(s[i+3] == '\0')
            {
                i= i+2;
            }
            else
            {
                if(s[i]=='S'&&s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O')
                {
                    if(s[i+4] == '\0')
                    {
                        count++;
                        i=i+2;
                    }
                    else
                    {
                        if(s[i+4] != 'J')
                        {
                            count++;
                            i=i+2;
                        }
                        else
                        {
                            if(s[i+6] != '\0' &&s[i+5]=='I'&&s[i+6]=='T')
                            {
                                flag++;
                                i=i+4;
                            }
                            else
                            {
                                count++;
                                i=i+2;
                            }
                        }
                    }
                }
            }
        }
        printf("SUVO = %lld",count);
        printf(", ");
        printf("SUVOJIT = %lld\n",flag);
    }
    return 0;
}
