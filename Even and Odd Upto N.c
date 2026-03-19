#include <stdio.h>
int main (){
    int n;
    int i;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter number:\n");
    for (int i = 1; i <= n; i++);
        if (i % 2 == 0) printf("%d", i);
    printf("\nOdd numbers:\n");
    for (int i = 1; i<= n; i++ )
        if (i % 2 != 0) printf("%d", i);
        return 0;   

}