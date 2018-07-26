#include <stdio.h>

int main()
{

    int n = 5,W = 15,i,maxi,used[10];
    float tot_v;

    int c[10] = {12, 1, 2, 1, 4};
    int v[10] = {4, 2, 2, 1, 10};

    for (i = 0; i < n; ++i)
    {
        used[i] = 0;
    }

    while (W > 0)
    {
        maxi = -1;
        for (i = 0; i < n; ++i)
            if ((used[i] == 0) &&((maxi == -1) || ((float)v[i]/c[i] > (float)v[maxi]/c[maxi])))
            {
                maxi = i;
            }

        used[maxi] = 1;
        W -= c[maxi];
        tot_v += v[maxi];

        if (W >= 0)
        {
            printf("Added object %d (%d$, %dKg) completely in the bag. Space left: %d.\n", maxi + 1, v[maxi], c[maxi], W);
        }
        else
        {
            printf("Added %d%% (%d$, %dKg) of object %d in the bag.\n", (int)((1 + (float)W/c[maxi]) * 100), v[maxi], c[maxi], maxi + 1);
            tot_v -= v[maxi];
            tot_v += (1 + (float)W/c[maxi]) * v[maxi];
        }
    }

    printf("Filled the bag with objects worth %.2f$.\n", tot_v);

    return 0;
}

