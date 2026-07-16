#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first side: ");
    scanf("%d", &a);

    printf("Enter second side: ");
    scanf("%d", &b);

    printf("Enter third side: ");
    scanf("%d", &c);

    if(a + b <= c || b + c <= a || a + c <= b) {
        printf("Invalid triangle");
    } else if(a == b && b == c) {
        printf("Equilateral \n");
    } else if((a == b && b != c) || (b == c && c != a) || (c == a && a != b)) {
        printf("Isosceles \n");
    } else {
        printf("Invalid side length");
    }        
    
    return 0;
}
