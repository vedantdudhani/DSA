#include <stdio.h>
#include <string.h>

int main() {
    char code[100000];   

    scanf("%s", code);

    int left = 0;
    int right = strlen(code) - 1;

    while (left < right) {
        char temp = code[left];
        code[left] = code[right];
        code[right] = temp;

        left++;
        right--;
    }

    printf("%s", code);

    return 0;
}
