/*                                    rabby.code
                                    Md.Golam Rabbani
                             Student Arrangement - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include <stdio.h>

int main()
{
    int stu,cap,row,pref,count=0,i;
    scanf("%d%d%d",&stu,&row,&cap);
    int bench[row+1];

    for(i=1; i<row+1; i++)
        bench[i]=0;

    for(i=0; i<stu; i++)
    {
        scanf("%d",&pref);


        if(bench[pref]<cap)
            bench[pref]+=1;
        else
            count++;

//printf("pref = %d and row = %d count=%d\n",pref,bench[pref],count);

    }

    printf("%d",count);
}
