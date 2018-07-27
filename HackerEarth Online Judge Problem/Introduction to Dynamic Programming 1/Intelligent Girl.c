/*                                    rabby.code
                                    Md.Golam Rabbani
                           Intelligent Girl - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */



#include<stdio.h>
#include<string.h>
int main()
{
    char str[10001];
    int array[10001],i=0,j=-1,count=0,no=0;
    scanf("%s",str);
    for(i=strlen(str)-1; i>=0; i--)
    {
        no = str[i]-6;
        if(no%2==0)
        {
            count++;
        }
        j++;
        array[j] = count;
    }
    for(i=j; i>=0; i--)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
