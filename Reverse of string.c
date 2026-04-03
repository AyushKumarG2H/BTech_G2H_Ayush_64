#include <stdio.h>
#include <string.h>

int reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
       
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);