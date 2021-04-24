#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    double x;
    double y;
} Point;

typedef struct Line {
    Point start;
    Point end;
} Line;

double calculate_slope(Point* p1, Point* p2) {
    return (p2->y - p1->y)/(p2->x - p1->x);
}

int main() {
    Point* p1 = (Point*)malloc(sizeof(Point));
    Point* p2 = (Point*)malloc(sizeof(Point));

    scanf("%d %d", &p1->x, &p1->y);
    scanf("%d %d", &p2->x, &p2->y);
    
    double slope = calculate_slope(p1, p2);

    printf("The value of slope is %lf", slope);
    return 0;
}