#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 4, 5, 6};  
    int n = 5;                   
    int pos = 3;    
    int x = 3;     

    for (int i = n; i >= pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;
    n++;

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
