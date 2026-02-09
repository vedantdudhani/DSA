#include <stdio.h>
int power(int a, int b)
{
    if (b == 0)
        return 1;

    return a * power(a, b - 1);
}

int main()
{
    int a = 2;
    int b = 5;

    printf("Input: %d %d\n", a, b);

    printf("Output: %d\n", power(a, b));

    return 0;
}
