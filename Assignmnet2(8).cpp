#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
// Function prototypes
int BinaryToDecimal(int number);
int DecimalToBinary(int number);
void DecimalToHexadecimal(int number);
void HexadecimalToDecimal(char hexNumber[]);
void BinaryToHexadecimal(int number);
void HexadecimalToBinary(char hexNumber[]);
int isValidBinary(int number);
int isValidHexadecimal(char hexNumber[]);

// Main function
int main() {
    int choice, number;
    char hexNumber[100];

    do {
        printf("\n--- Numerical Conversion Menu ---\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Hexadecimal to Decimal\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                if (isValidBinary(number)) {
                    printf("Decimal equivalent: %d\n", BinaryToDecimal(number));
                } else {
                    printf("Invalid binary number!\n");
                }
                break;

            case 2:
                printf("Enter a decimal number: ");
                scanf("%d", &number);
                printf("Binary equivalent: %d\n", DecimalToBinary(number));
                break;

            case 3:
                printf("Enter a decimal number: ");
                scanf("%d", &number);
                printf("Hexadecimal equivalent: ");
                DecimalToHexadecimal(number);
                break;

            case 4:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexNumber);
                if (isValidHexadecimal(hexNumber)) {
                    HexadecimalToDecimal(hexNumber);
                } else {
                    printf("Invalid hexadecimal number!\n");
                }
                break;

            case 5:
                printf("Enter a binary number: ");
                scanf("%d", &number);
                if (isValidBinary(number)) {
                    printf("Hexadecimal equivalent: ");
                    BinaryToHexadecimal(number);
                } else {
                    printf("Invalid binary number!\n");
                }
                break;

            case 6:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hexNumber);
                if (isValidHexadecimal(hexNumber)) {
                    printf("Binary equivalent: ");
                    HexadecimalToBinary(hexNumber);
                } else {
                    printf("Invalid hexadecimal number!\n");
                }
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}

// 1. Converts Binary to Decimal
int BinaryToDecimal(int number) {
    int decimal = 0, base = 1, last_digit;

    while (number > 0) {
        last_digit = number % 10;
        decimal += last_digit * base;
        base *= 2;
        number /= 10;
    }

    return decimal;
}

// 2. Converts Decimal to Binary
int DecimalToBinary(int number) {
    int binary = 0, remainder, factor = 1;

    while (number > 0) {
        remainder = number % 2;
        binary += remainder * factor;
        factor *= 10;
        number /= 2;
    }

    return binary;
}

// 3. Converts Decimal to Hexadecimal
void DecimalToHexadecimal(int number) {
    char hex[100];
    int i = 0;

    if (number == 0) {
        printf("0\n");
        return;
    }

    while (number != 0) {
        int temp = number % 16;

        if (temp < 10) {
            hex[i] = temp + 48;
        } else {
            hex[i] = temp + 55; // For A-F
        }

        i++;
        number /= 16;
    }

    // Print the hexadecimal number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

// 4. Converts Hexadecimal to Decimal
void HexadecimalToDecimal(char hexNumber[]) {
    int length = strlen(hexNumber);
    int base = 1, decimal = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (hexNumber[i] >= '0' && hexNumber[i] <= '9') {
            decimal += (hexNumber[i] - 48) * base;
            base *= 16;
        } else if (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') {
            decimal += (hexNumber[i] - 55) * base;
            base *= 16;
        } else if (hexNumber[i] >= 'a' && hexNumber[i] <= 'f') {
            decimal += (hexNumber[i] - 87) * base;
            base *= 16;
        }
    }

    printf("Decimal equivalent: %d\n", decimal);
}

// 5. Converts Binary to Hexadecimal
void BinaryToHexadecimal(int number) {
    int decimal = BinaryToDecimal(number);
    DecimalToHexadecimal(decimal);
}

// 6. Converts Hexadecimal to Binary
void HexadecimalToBinary(char hexNumber[]) {
    int decimal;
    HexadecimalToDecimal(hexNumber); // Display decimal equivalent

    // Reconvert that to binary
    sscanf(hexNumber, "%x", &decimal);
    printf("Binary equivalent: %d\n", DecimalToBinary(decimal));
}

// Function to check if a binary number is valid (contains only 0s and 1s)
int isValidBinary(int number) {
    while (number > 0) {
        if (number % 10 != 0 && number % 10 != 1) {
            return 0;
        }
        number /= 10;
    }
    return 1;
}

// Function to check if a hexadecimal number is valid
int isValidHexadecimal(char hexNumber[]) {
    int length = strlen(hexNumber);

    for (int i = 0; i < length; i++) {
        if (!(isdigit(hexNumber[i]) || (hexNumber[i] >= 'A' && hexNumber[i] <= 'F') || (hexNumber[i] >= 'a' && hexNumber[i] <= 'f'))) {
            return 0;
        }
    }

    return 1;
}

