
/** My Online Submit Link: https://www.hackerearth.com/submission/18455323/
**/




#include <stdio.h>

double calprob(double red,double green,double total)
{
    double probability = red/total;
    if(green>=1)
        probability += (green/total)*((green-1)/(total-1))*calprob(red,green-2,total-2);
    return probability;
}

int main()
{
    int i,k,a,b,l;
    float j;
    scanf("%d",&i);
    for(k=1; k<=i; k++)
    {

        scanf("%d%d",&a,&b);
        l=a+b;

        if(a==0)
        {
            printf("1.000000\n");
        }
        else
        {
            j=calprob(a,b,l);
            printf("%f\n",j);
        }

    }
}
