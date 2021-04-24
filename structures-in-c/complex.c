#include <stdio.h>
#include <stdlib.h>

typedef struct complex {
    int real;
    int imaginary;
} complex;

complex* add(complex* num1, complex* num2) {
    complex* res = (complex*)malloc(sizeof(complex));
    res->real = num1->real + num2->real;
    res->imaginary = num1->imaginary + num2->imaginary;
    return res;
}

int main() {
    complex num1, num2;
    scanf("%d %d", &num1.real, &num1.imaginary);
    scanf("%d %d", &num2.real, &num2.imaginary);
    complex* ans = add(&num1, &num2);
    printf("%d + i%d", ans->real, ans->imaginary);
    free(ans);
}