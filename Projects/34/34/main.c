#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fact(int n){
    if (n == 0) return 1;
    else if(n == 1) return 1;
    return n*fact(n-1);
}

int main()
{
    int sum = 0;
    for(int i = 1; i<1000000; i++){
        sum = 0; int num = i;
            for(int x = 0; x<(int)log10(i)+1;x++){
                sum += fact(num%10);
                num /= 10;
            }
        if(sum == i){
            printf("%d\n", i);
        }
    }
    return 0;
}
