
#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum;

    printf("Armstrong numbers from 1 to 100 are: ");
    for (num = 1; num <= 100; num++) {
        sum = 0;
        originalNum = num;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            sum += (remainder * remainder * remainder);
            originalNum /= 10;
        }
        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}