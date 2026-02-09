#include <stdio.h>

int main() 
{
    int n = 6;
    int arr[6] = {1, 1, 2, 2, 3, 3};

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nUnique elements: ");

    printf("%d ", arr[0]);

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] != arr[i - 1]) 
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
