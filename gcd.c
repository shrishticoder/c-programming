#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if(a == 0 && b == 0) {
        printf("GCD is not defined");
    } else if(a == 0) {
        printf("GCD is %d\n", b);
    } else if(b == 0) {
        printf("GCD is %d\n", a);
    } else {
        int gcd = 1;
        for(int i = 1; i <= a && i <= b; i++) {
            if(a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }
        printf("GCD of %d and %d = %d\n", a, b, gcd);
    }
    
    
    return 0;
}
