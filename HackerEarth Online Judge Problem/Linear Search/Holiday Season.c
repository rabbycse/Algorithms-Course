/*                                    rabby.code
                                    Md.Golam Rabbani
                             Holiday Season - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include <stdio.h>

main()
{
    int n,a,b,c,d,count=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    for(a=0; a<n; a++)
    {
        for(b=a+1; (b<n); b++)
        {

            for(c=b+1; (c<n); c++)
            {

                for(d=c+1; (d<n); d++)
                {
                    if((str[a]==str[c])&&(str[b]==str[d]))
                    {
                        count=count+1;
                        printf("%d%d%d%d\n",a,b,c,d);

                    }
                }

            }

        }
    }

    printf("%d",count);
}
