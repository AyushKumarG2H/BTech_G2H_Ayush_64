#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of elements = %d\n", sum);
    return 0;
}
