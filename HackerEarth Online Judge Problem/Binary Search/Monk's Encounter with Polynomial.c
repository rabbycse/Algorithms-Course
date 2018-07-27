/*                                    rabby.code
                                    Md.Golam Rabbani
                             Monk's Encounter with Polynomial - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include <stdio.h>

int main()
{
    long long int X, A,B,C,ANS,K = 0,TC;
    scanf("%lld",&TC);
    for(int t = 0; t < TC; t++)
    {
        scanf("%lld %lld %lld %lld",&A,&B,&C,&ANS);
        for(X = 0; X < 100000; X++)
        {
            K = A * (X * X) + B * X + C;
            if(K >= ANS)
            {
                printf("%lld\n",X);
                break;
            }
        }
    }
    return 0;
}
