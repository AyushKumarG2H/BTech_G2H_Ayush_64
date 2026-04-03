#include <stdio.h>
int main()
{
    int n, key;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter elements to search:");
    scanf("%d", &key);

    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key) {pos = i; break;}
    }
    if (pos == -1)
    printf("%d not found in array.\n", key);
    else printf("%d found at index %d (0-based).\n", key, pos);
    return 0;
}