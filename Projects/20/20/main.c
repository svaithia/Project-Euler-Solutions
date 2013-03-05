#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[200] = {0};
    array[197] = 1; // starts with 100 SO: [197] = 1 ~ [198] = 0 ~ [199] = 0;

    for(int x = 99; x>0; x--){
        for(int i = 199; i>=0; i--){
        array[i] *= x;
        }
        for(int i = 199; i>0; i--){
            array[i-1] += array[i]/10;
            array[i] %= 10;
        }
    }
    int sum = 0;
    for(int i = 0; i<200;i++){
    printf("%d", array[i]);
    sum += array[i];
    }
    printf("\n\n\nSUM: %d\n\n\n",sum);


    return 0;
}
