#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct rectangle {
    int length;
    int breadth;
} rect;

bool cmp_rec (struct rect* r1){
    if(r1->len == r1->breadth)
        return true;
    else
        return false;
}

bool check_square(rect r) {
    return r.length == r.breadth;
}

int compare_rectangles(rect r1, rect r2) {
    if(r1.length > r2.length) {
        return 0;
    } else if(r2.length > r1.length) {
        return 1;
    } else {
        if(r1.breadth > r2.breadth) {
            return 0;
        } else if (r1.breadth < r2.breadth) {
            return 1;
        } else {
            return 2;
        }
    }
}


int main() {
    rect r1;
    r1.length = 3;
    r1.breadth = 3;
    bool ans = check_square(r1);
    ans ? printf("Yes, square") : printf("No");
}