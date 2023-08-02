#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_valid_number(char *str) {
    while (*str) {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

int multiply_numbers(int num1, int num2) {
    return num1 * num2;
}

void print_number(int num) {
    char buffer[20];
    int len = 0;
    int temp = num;

    // Calculate the length of the number
    do {
        len++;
        temp /= 10;
    } while (temp != 0);

    // Convert the number to a string
    buffer[len] = '\0';
    while (num != 0) {
        len--;
        buffer[len] = num % 10 + '0';
        num /= 10;
    }

    // Print the number
    while (buffer[len] != '\0') {
        putchar(buffer[len]);
        len++;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1_str = argv[1];
    char *num2_str = argv[2];

    if (!is_valid_number(num1_str) || !is_valid_number(num2_str)) {
        printf("Error\n");
        return 98;
    }

    int num1 = atoi(num1_str);
    int num2 = atoi(num2_str);

    int result = multiply_numbers(num1, num2);

    print_number(result);
    putchar('\n');

    return 0;
}

