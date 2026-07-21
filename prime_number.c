#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("%d is neither prime nor composite\n", n);
    } else {
        int isComposite = 0;

        for(int i = 2; i < n; i++) {
            if(n % i == 0) {
                isComposite = 1;
                break;
            }
        }

        if(isComposite == 0) {
            printf("The given number is prime\n");
        } else {
            printf("The given number is composite\n");
        }
    }


    return 0;
}
