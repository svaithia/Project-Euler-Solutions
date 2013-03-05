#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[505] = {0};
    a[500] = 2;
    int n = 1000;

    for(int j = 2; j<=n; j++){
        int i;
        for(i = 500; i >= 0; i--){
            a[i] *= 2;
            //if(a[i-1] == 0 && a[i-2] == 0 && a[i-3] == 0) break;
        }
        for(int k = 500; k>=i; k--){
            a[k-1] += a[k]/10;
            a[k] %= 10;
        }
    }
    int sum = 0;
    for(int i = 0; i<505; i++){
            printf("%d", a[i]);
            sum += a[i];
    }
    printf("\n\nSUM: %d\n\n", sum);


    return 0;
}
