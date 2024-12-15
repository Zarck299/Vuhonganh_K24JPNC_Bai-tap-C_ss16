#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    printf("Cach 1:\n");
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", (void*)&x);
    printf("\nCach 2:\n");
    printf("Gia tri cua x (thong qua con tro): %d\n", *ptr);
    printf("Dia chi cua x (thong qua con tro): %p\n", (void*)ptr);

    return 0;
}

