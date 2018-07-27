/*                                    rabby.code
                                    Md.Golam Rabbani
                            Insect colony  - https://www.hackerearth.com/submissions/rabby.code/
                                        2018
                                    */



#include<stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a,c=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a%2!=0)
                c++;
        }
        if(c%2==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
