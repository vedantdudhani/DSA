#include <stdio.h>
int main()
{
    int n, a[50][50];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                printf("Not an Identity Matrix");
                return 0;
            }

            if (i != j && a[i][j] != 0)
            {
                printf("Not an Identity Matrix");
                return 0;
            }
        }
    }
    printf("Identity Matrix");

    return 0;
}