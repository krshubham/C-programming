#include <stdio.h>
// #pragma pack(1)

typedef struct padding {
    char b; //1byte
    int a; //4bytes
    char c; //1 byte
} padding;

//6 bytes
int main() {
    padding p;
    printf("%d\n", sizeof(p));
    return 0;
}