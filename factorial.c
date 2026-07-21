#include <stdio.h>

int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    if(n >= 0) {
        int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact = fact * i;
        } 
        printf("Factorial of %d = %d\n", n, fact);
    } else {
        printf("Factorial is not defined for negative numbers.\n");
    }

    return 0;
}
