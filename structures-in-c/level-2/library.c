#include <stdio.h>
#include <string.h>


typedef struct Book {
    int access_number;
    char author[50];
    char title[50];
    int is_available;
    int pages;
} Book;



int main() {
    int n;
    scanf("%d", &n);
    Book books[n];
    for(int i = 0; i < n; i++){
        scanf("%s", books[i].title);
        scanf("%s", books[i].author);
        scanf("%d", &books[i].access_number);
        scanf("%d", &books[i].pages);
        scanf("%d", &books[i].is_available);
    }
    char title[50];
    scanf("%s", title);
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(strstr(books[i].title, title) && books[i].is_available == 1) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}