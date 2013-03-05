#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year = 1901, date = 1, month = 1, day = 1;
    int data[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int counter = 0;

    while(year < 2001){
        date++; day++; day%=7;
        data[1] = (year%4) ? 29 : 28;
        if(date = data[month-1]){
            date = 1;
            month++;
            if(month > 12){
                month = 1; year++;
            }
            if(day == 0){
            counter++;
            }
        }
    }

    printf("%d", counter);
    return 0;
}
