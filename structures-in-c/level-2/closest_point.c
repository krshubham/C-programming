#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

typedef struct Point Point;

double distance_of_points(Point p1, Point p2) {
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}

int main() {
    int n;
    scanf("%d", &n);
    int x, y;
    //we need an array of points
    Point points[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        Point p = {x,y};
        points[i] = p;
    }
    Point given_point;
    scanf("%d %d", &given_point.x, &given_point.y);
    Point ans = points[0];
    double distance = distance_of_points(given_point, ans);
    for(int i = 1; i < n; i++) {
        double curr_distance = distance_of_points(given_point, points[i]);
        if(curr_distance < distance) {
            distance = curr_distance;
            ans = points[i];
        }
    }
    printf("%d %d", ans.x, ans.y);
    return 0;
}