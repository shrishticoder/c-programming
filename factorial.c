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
        printf("Factorial is : %d\n", fact);
    } else {
        printf("Factorial is not defined");
    }

    return 0;
}
