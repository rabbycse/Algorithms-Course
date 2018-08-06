#include <stdio.h>

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i=0; i<10; i++){
        printf(" %d",arr[i]);
    }
    printf("\n");
    for(int i=9; i>=0; i--){
        printf(" %d",arr[i]);
    }
    printf("\n");
    for(int i=0; i<9; i++){
        arr[i] = arr[i+1];
        printf(" %d",arr[i]);
    }
    return 0;
}
