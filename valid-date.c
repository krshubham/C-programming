#include <stdio.h>
#include <stdbool.h>

typedef struct date {
    int day;
    int month;
    int year;
} date;

bool leap_year(int year) {
    if(year % 400 == 0) {
        return true;
    }
    if(year % 100 == 0) {
        return false;
    }

    if(year%4 == 0) {
        return true;
    }
    return false;
}



int main() {
    date d;
    scanf("%d-%d-%d",&d.day,&d.month,&d.year);
    bool valid = true;
    if(d.day < 1) {
        valid = false;
    }
    if(d.month < 1 || d.month > 12) {
        valid = false;
    }
    switch(d.month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10: 
        case 12:
            if(d.day > 31) {
                valid = false;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(d.day > 30) {
                valid = false;
            }
        break;
        case 2:
            if(leap_year(d.year)) {
                if(d.day > 29) {
                    valid = false;
                }
            } else {
                if(d.day > 28) {
                    valid = false;
                }
            }
        break;
    }
    valid ? printf("Valid") : printf("Invalid");
    return 0;
}