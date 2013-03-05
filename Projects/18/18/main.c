#include <stdio.h>
#include <stdlib.h>

int main()
{
    char raw[] = "75 95 64 17 47 82 18 35 87 10 20 04 82 47 65 19 01 23 75 03 34 88 02 77 73 07 63 67 99 65 04 28 06 16 70 92 41 41 26 56 83 40 80 70 33 41 48 72 33 47 32 37 16 94 29 53 71 44 65 25 43 91 52 97 51 14 70 11 33 28 77 73 17 78 39 68 17 57 91 71 52 38 17 14 91 43 58 50 27 29 48 63 66 04 68 89 53 67 30 73 16 69 87 40 31 04 62 98 27 23 09 70 98 73 93 38 53 60 04 23";
    int rawint[120] = {0};
    for(int i = 0; i<120; i++){
        rawint[i] = (raw[i*3]-48)*10+(raw[i*3+1]-48);
    }

    int filt[15][15] = {0}; int i = 0;
    for(int y = 0; y<15; y++){
        for(int x = 0; x<=y; x++){
            filt[x][y] = rawint[i]; i++;
        }
    }

    int sum = rawint[0]; int x = 0;
    for(int y = 1; y<15; y++){

        sum += larger;
    }

    printf("%d", product);



    /*
    int filt[30][15] = {0};

    int i =0;
    for(int y = 0; y<15; y++){
        for(int x = 14-y; 15+y>x; x+=2){
            filt[x][y] = rawint[i];
            i++;
        }
    }

    int product = rawint[0]; int x = 14;
    for(int y = 1; y<15; y++){
        int larger = 0;
        if(filt[x-1][y] > filt[x+1][y]){
            x = x-1;
            larger = filt[x][y];
        }
        else{
            x = x+1;
            larger = filt[x][y];
        }

        product += larger;
    }

    printf("%d", product);



    for(int y = 0; y<15; y++){
        for(int x = 0; x<30; x++){
            if(filt[x][y] == 0) printf("  ");
            else if(filt[x][y] < 10) printf("0%d", filt[x][y]);
            else printf("%d", filt[x][y]);

        }
        printf("\n");
    }/**/


    return 0;
}
