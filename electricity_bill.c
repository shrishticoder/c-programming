#include <stdio.h>

int main() {
    int units;

    printf("\n=====Electricity bill calculator=====\n\n");
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    printf("Units consumed : %d\n", units);


    if(units >= 0 && units <= 100) {
        printf("Total bill     : %d\n", units * 2);
    } else if(units >= 101 && units <= 200) {
        printf("Total bill     : %d\n", units * 3);
    } else if(units > 200) {
        printf("Total bill     : %d\n", units * 5);
    } else {
        printf("Invalid unit \n");
    }
    
    return 0;
}
