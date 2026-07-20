#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first side: ");
    scanf("%d", &a);

    printf("Enter second side: ");
    scanf("%d", &b);

    printf("Enter third side: ");
    scanf("%d", &c);

    if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || a + c <= b) {
        printf("The given sides do not form a valid triangle.\n");
    } else if(a == b && b == c) {
        printf("The triangle is equilateral\n");
    } else if((a == b && b != c) || (b == c && c != a) || (c == a && a != b)) {
        printf("The triangle is isosceles\n");
    } else {
        printf("The triangle is scalene\n");
    }        
    
    return 0;
}
