#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, k = 30;
    int comparisons = 0;

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == k) 
        {
            printf("Found at index %d\n", i);
            printf("Comparisons = %d\n", comparisons);
            return 0;
        }
    }

    printf("Not Found\n");
    printf("Comparisons = %d\n", comparisons);

    return 0;
}
