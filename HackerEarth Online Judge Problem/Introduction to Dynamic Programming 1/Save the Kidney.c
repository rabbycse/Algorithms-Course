#include<stdio.h>
#include<stdlib.h>
char *p;
int n;
int main(void)
{
    int i,j,k,a,o,x,m=-1;
    scanf("%d",&n);
    p=(char*)calloc(n,sizeof(char));
    getchar();
    gets(p);
    for(i=n; i>=2; i--)
    {
        if(m>i)
            break;
        for(j=0; j<=n-i; j++)
        {
            a=0;
            o=0;
            x=0;
            for(k=j; k<i+j; k++)
            {
                if(*(p+k)=='1')
                    a++;
                else if(*(p+k)=='0')
                    o++;
                else
                    x++;
            }
            if(((x+o-a)>=0&&(x+o-a)%2==0)&&((x-o+a)>=0&&(x-o+a)%2==0))
            {
                if(m<a+o+x)
                    m=i;
            }
            if(i==n)
            {
                if(a==n||o==n)
                {
                    printf("-1");
                    exit(0);
                }
            }
        }
    }
    printf("%d",m);
}
