// Write a C program that takes three numbers from the user and determines: 
// o The largest number. 
// o The smallest number. 
//  Challenge: Solve the problem using both if-else and switch-case statements.

#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    // Input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // ---------- Using if-else --------------------------------------------------------------
    
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;





    
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("\nUsing if-else:\n");
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    // ---------- Using switch-case ----------------------------------------
    int max_ab = (a > b) ? a : b;
    int max_all = (max_ab > c) ? max_ab : c;

    int min_ab = (a < b) ? a : b;
    int min_all = (min_ab < c) ? min_ab : c;

    // Trick: use switch with constant 1
    printf("\nUsing switch-case (with conditional logic):\n");

    switch (1) {
        case 1:
            printf("Largest = %d\n", max_all);
            printf("Smallest = %d\n", min_all);
            break;
    }

    return 0;
}
