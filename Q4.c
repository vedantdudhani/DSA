#include <stdio.h>

int main()
{
    int i, temp;

    int n = 5;
    int a[5] = {1, 2, 3, 4, 5};

    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
