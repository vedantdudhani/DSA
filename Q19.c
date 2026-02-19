#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

     for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minSum = 1000000;   
    int x = 0, y = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            int sum = arr[i] + arr[j];

            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                x = arr[i];
                y = arr[j];
            }
        }
    }

    printf("%d %d", x, y);

    return 0;
}
