#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    //p = &arr[0];
    p = arr; /** by default point **/

    for(int i=0; i<5; i++){
        //printf(" %d",*(p+i));
        printf(" %d = %d\n",*(p+i),p+i); /** p+i is address and *(p+i) is value printed **/
    }
    return 0;
}
