#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 50, 70};
    int b[] = {15, 25, 40, 60};

    int p = 5, q = 4;

    for (int i = 0; i < p; i++) printf("%d ", a[i]);
    printf("\n");

    for (int i = 0; i < q; i++) printf("%d ", b[i]);
    printf("\n");

    int i = 0, j = 0;

    while (i < p && j < q)
        printf("%d ", a[i] < b[j] ? a[i++] : b[j++]);

    while (i < p) printf("%d ", a[i++]);
    while (j < q) printf("%d ", b[j++]);

    return 0;
}
