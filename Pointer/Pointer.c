#include <stdio.h>

int main()
{
    int v1=10,v2=20;
    int *p1,*p2;
    p1=&v1;
    p2=&v2;
    *p1=*p2;
    printf(" Value of v1 = %d\n",v1);
    printf(" Address of v1 = %d\n",&v1);
    printf(" Value of v2 = %d\n",v2);
    printf(" Address of v2 = %d\n",&v2);
    printf(" Value of p1 = %d\n",*p1);
    printf(" Address of p1 = %d\n",&p1);
    printf(" Value of p2 = %d\n",*p2);
    printf(" Address of p2 = %d\n\n",&p2);

    printf("Double Pointer :\n");
    int v3=30;
    int *p3;
    p3=&v3;
    int **p4;
    p4=&p3;
    printf(" Value of v3 = %d\n",v3);
    printf(" Address of v3 = %d\n",&v3);
    printf(" Value of p3 = %d\n",p3);
    printf(" Address of p3 = %d\n",&p3);
    printf(" Value of p4(single) = %d\n",*p4);
    printf(" Value of p4(double) = %d\n",**p4);
    printf(" Address of p4 = %d\n",&p4);

    return 0;
}
