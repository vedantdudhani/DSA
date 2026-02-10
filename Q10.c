#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int i, n = strlen(s);

    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}
