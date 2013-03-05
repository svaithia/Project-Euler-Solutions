#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[1010] = {0}; a[0] = 1;
    int b[1010] = {0}; b[0] = 1;
    int c[1010] = {0};
    int p = 0;
    int n = 4782;
    int digit = 1000; digit--;

    int i;
    for(i = 3; i<=n; i++){

            for(int i = 0; i<1010; i++){
                c[i] = a[i] + b[i];
                if(a[i+1] == 0 && b[i+1] == 0 && a[i+2] == 0 && b[i+2] == 0 && a[i] == 0 && b[i] == 0) break;
            }
            for(int i = 0; i<1010; i++){
                c[i+1] += c[i]/10;
                c[i] %=10;
            }

        for(int i = 0; i<1010; i++) a[i] = b[i];
        for(int i = 0; i<1010; i++) b[i] = c[i];

        if(c[digit] > 0){
            p = i; break;
        }
    }

    for(int z = digit; z>=0; z--){
        printf("%d",b[z]);
    }



    printf("\n\n\n%d\n\n", p);
    return 0;
}
