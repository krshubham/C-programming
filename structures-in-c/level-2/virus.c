#include <stdio.h>


typedef struct Virus {
    int signature;
    int size;
    char name[50];
} Virus;

void swap(Virus* sa, Virus* sb) {
    Virus temp = *sa;
    *sa = *sb;
    *sb = temp;
}

void sort(Virus viruses[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(viruses[j].signature < viruses[j+1].signature) {
                swap(&viruses[j], &viruses[j+1]);
            }
        }
    }
}


int main() {
    int n;
    scanf("%d", &n);
    Virus viruses[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d %s", &viruses[i].signature, &viruses[i].size, viruses[i].name);
    }
    sort(viruses, n);
    for(int i = 0; i < n; i++) {
        printf("%d %s\n", viruses[i].signature, viruses[i].name);
    }
    printf("\n");
    return 0;
}