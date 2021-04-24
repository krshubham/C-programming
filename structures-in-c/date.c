#include <stdio.h>
#include <stdbool.h>

const int days_in_months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


typedef struct Date {
    int day;
    int month;
    int year;
} Date;

void print_date(Date date) {
    printf("%d-%d-%d", date.day, date.month, date.year);
}

bool check_date_validity(Date* date) {
    if(date->month < 1 || date->month > 12) {
        return false;
    }
    int max_days_allowed = days_in_months[date->month-1];
    if(date->day > max_days_allowed || date->day < 1) {
        return false;
    }
    return true;
}


int main() {
    Date date;
    printf("Enter the date: \n");
    scanf("%d-%d-%d", &date.day, &date.month, &date.year);
    bool return_val = check_date_validity(&date);
    return_val ? printf("Valid") : printf("Invalid");
    return 0;
}