#include <stdio.h>
#include <stdbool.h>

typedef struct Circle {
    int x;
    int y;
    int radius;
} Circle;


bool concentric(Circle c1, Circle c2) {
    return (c1.x == c2.x) && (c1.y == c2.y) && (c1.radius < c2.radius);
}


int main() {
    int n;
    scanf("%d", &n);
    Circle circles[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &circles[i].x, &circles[i].y, &circles[i].radius);
    }
    Circle given_circle;
    scanf("%d %d %d", &given_circle.x, &given_circle.y, &given_circle.radius);
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(concentric(circles[i], given_circle)) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}