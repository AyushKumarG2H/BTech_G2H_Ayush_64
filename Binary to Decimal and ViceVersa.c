#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long binaryNumber)
 {
    int decimalNumber = 0, i = 0, remainder;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    long long binaryNumber;
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);
    printf("Decimal number is: %d\n", binaryToDecimal(binaryNumber));
    return 0;
}