#include<stdio.h>
typedef long long ll;
int main()
{
    ll t,i;
    char s[100003];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%s",s);
        ll l=strlen(s);
        int a[26];
        for(i=0;i<26;i++)a[i]=0;
        for(i=0;i<l/2;i++)
        {
            if(s[i]!=s[l-1-i])
            {
                a[s[i]-'a']++;
                a[s[l-1-i]-'a']++;
            }
        }
        ll c=0;
        ll c1=0;
        ll flag=1;
        for(i=0;i<26;i++)
        {
            if(a[i]>0)
            {
                if(a[i]!=2)
                {
                    flag=0;
                    
                }
                if(a[i]==1)
                c1++;
                else
                c++;
            }
        }
        if(flag&&(c<=2))
        printf("Yes\n");
        else if(c1==2&&c==0&&l&1)
        {
            for(i=0;i<26;i++)
            {
                if(a[i]==1&&s[l/2]-'a'==i)
                flag=1;
            }
            if(flag)
            printf("Yes\n");
            else
            printf("No\n");
        }
        else
        printf("No\n");
    }
}