#include <stdio.h>

int main() {
    int x;
    int *pointer;
    pointer = &x;
    x = 10;
    printf("x = %d\n", x);
    printf("*pointer = %d\n", *pointer);
    printf("address of x = %p\n", &x);
    printf("address of pointer = %p\n", &pointer);

    return 0;
}
