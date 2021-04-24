#include <stdio.h>
#include <stdbool.h>


typedef struct Date {
    int day;
    int month;
    int year;
} Date;

typedef struct Employee {
    char name[20];
    int id;
    Date date;
} Employee;

bool equal_dates(Date a, Date b) {
    return (a.day == b.day) && (a.month == b.month) && (a.year == b.year);
}


int main() {
    int n;
    scanf("%d", &n);
    Employee employees[n];
    for(int i = 0; i < n; i++) {
        scanf("%s", employees[i].name);
        scanf("%d", &employees[i].id);
        scanf("%d-%d-%d", &employees[i].date.day, 
        &employees[i].date.month, &employees[i].date.year);
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        bool unique = true;
        for(int j = 0; j < n; j++) {
            if(j != i && equal_dates(employees[i].date, employees[j].date)) {
                unique = false;
            }
        }
        if(unique) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}