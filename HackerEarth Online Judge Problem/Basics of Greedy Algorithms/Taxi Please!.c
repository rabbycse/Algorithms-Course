#include <stdio.h>

int main()
{
    int nu,nt,i,j,r[10006],s;
    long long int user[10006][5],tx[105];
    scanf("%d%d",&nu,&nt);
    for(i=1; i<=nt; i++)
        tx[i]=0;
    for(i=1; i<=nu; i++)
    {
        scanf("%lli%lli",&user[i][0],&user[i][1]);
        user[i][2]=i;
        for(j=i; j>1; j++)
        {
            if(user[j][0]<user[j-1][0])
            {

                tx[0]=user[j][0];
                user[j][0]=user[j-1][0];
                user[j-1][0]=tx[0];

                tx[0]=user[j][1];
                user[j][1]=user[j-1][1];
                user[j-1][1]=tx[0];

                tx[0]=user[j][2];
                user[j][2]=user[j-1][2];
                user[j-1][2]=tx[0];
            }
            else
                break;
        }
    }
    for(j=1; j<=nu; j++)
    {
        for(i=1,s=1; i<=nt; i++)
        {
            if(tx[i]<user[j][0])
            {
                s=0;
                tx[i]=user[j][0]+user[j][1]-1;
                r[user[j][2]]=i;
                break;
            }

        }
        if(s)
            r[user[j][2]]=-1;
    }
    for(i=1; i<=nu; i++)
        printf("%d ",r[i]);
    return 0;
}
