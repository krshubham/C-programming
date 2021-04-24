#include <stdio.h>

typedef struct Point {
    double x;
    double y;
} Point;

typedef struct Line {
    Point start;
    Point end;
} Line;

double line_slope(Line l) {
    return (l.end.y - l.start.y)/(l.end.x - l.start.x);
}

int main() {
    Line l1, l2;
    Point l1_start, l1_end;
    Point l2_start, l2_end;
    scanf("%lf %lf", &l1_start.x, &l1_start.y);
    scanf("%lf %lf", &l1_end.x, &l1_end.y);
    scanf("%lf %lf", &l2_start.x, &l2_start.y);
    scanf("%lf %lf", &l2_end.x, &l2_end.y);
    
    l1.start = l1_start;
    l1.end = l1_end;
    l2.start = l2_start;
    l2.end = l2_end;


    printf("%lf", line_slope(l1));
    printf("%lf", line_slope(l2));

    if(line_slope(l1) == line_slope(l2)) {
        printf("Parallel");
    } else {
        printf("Not parallel");
    }

}