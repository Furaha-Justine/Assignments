#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 100

// Function to convert binary to decimal
long long binaryToDecimal(const char *binary) {
    long long decimal = 0;
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - i - 1);
        }
    }
    return decimal;
}

// Function to convert decimal to hexadecimal
void decimalToHex(long long decimal, char *hex) {
    sprintf(hex, "%llX", decimal); // Convert to hexadecimal format
}

int main() {
    char binary[MAX];
    char hex[MAX];
    
    // Input binary number
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    // Convert binary to decimal
    long long decimal = binaryToDecimal(binary);
    
    // Convert decimal to hexadecimal
    decimalToHex(decimal, hex);
    
    // Print the hexadecimal equivalent
    printf("Hexadecimal equivalent: %s\n", hex);
    
    return 0;
}