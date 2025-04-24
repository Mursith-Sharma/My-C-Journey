#include <stdio.h>

// Function to reverse a number
int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

// Function to check RSRN
int is_rsrn(int num) {
    int reversed_num = reverse(num);
    int square_original = num * num;
    int square_reversed = reversed_num * reversed_num;
    int reversed_square = reverse(square_reversed);

    return (square_original == reversed_square);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    if (is_rsrn(number)) {
        printf("%d is a Reverse Square Reverse Number.\n", number);
    } else {
        printf("%d is NOT a Reverse Square Reverse Number.\n", number);
    }

    return 0;
}
