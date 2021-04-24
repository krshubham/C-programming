#include <stdio.h>
#include <stdlib.h>

typedef struct time {
    int hours;
    int mins;
    int seconds;
} time;

time add_duration(time t, int duration) {
    time* result = (time*)malloc(sizeof(time));
    long time_in_seconds = t.hours*3600L + t.mins*60L + t.seconds;
    long duration_in_seconds = duration*60;
    long result_in_seconds = time_in_seconds + duration_in_seconds;
    
    result->hours = result_in_seconds/3600;
    result_in_seconds = result_in_seconds%3600;
    result->mins = result_in_seconds/60;
    result_in_seconds = result_in_seconds%60;
    result->seconds = result_in_seconds;
    return *result;
}

void print_time(time t) {
    printf("%d:%d:%d\n", t.hours, t.mins, t.seconds);
}

int main() {
    time* t1 = (time*)malloc(sizeof(time));
    scanf("%d:%d:%d", &t1->hours, &t1->mins, &t1->seconds);
    int duration;
    scanf("%d", &duration);
    time result = add_duration(*t1, duration);
    print_time(result);
    free(t1);
    return 0;
}