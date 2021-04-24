#include <stdio.h>
#include <string.h>

struct student {
    char regno[20];
    char name[20];
    int class_number;
};

typedef struct student student;

int main() {
    student s1;
    printf("Enter the regno of the student");
    scanf("%s", s1.regno);
    strcpy(s1.name, "shubham");
    s1.class_number = 1920;
    printf("%s\t%d\t%s",s1.regno, s1.class_number, s1.name);
    return 0;
}