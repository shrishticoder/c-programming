#include <stdio.h>

int main() {
    char ch;
    printf("Enter alphabet: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet", ch);
    } else if(ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet", ch);
    } else {
        printf("Not an english alphabet");
    }
    
    return 0;
}