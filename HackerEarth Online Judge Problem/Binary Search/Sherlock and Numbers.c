/*                                    rabby.code
                                    Md.Golam Rabbani
                             Sherlock and Numbers - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include<stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    for (int t = 0; t < testCase; t++)
    {
        int num, kElems, pth;
        scanf("%d %d %d", &num, &kElems, &pth);
        if ((num - kElems) < pth)
        {
            for (int i = 0; i < kElems; i++)
            {
                int removwl;
                scanf("%d", &removwl);
            }
            printf("-1\n");
        }
        else
        {
            int pthSmallest = pth;
            for (int i = 0; i < kElems; i++)
            {
                int removal;
                scanf("%d ", &removal);
                if (removal <= pthSmallest)
                {
                    pthSmallest++;
                }
            }
            printf("%d\n", pthSmallest);
        }

    }
    return 0;
}
