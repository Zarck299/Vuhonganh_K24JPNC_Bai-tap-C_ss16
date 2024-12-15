#include <stdio.h>
void sum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x = 7, y = 12;
    int result = 0;
    sum(&x, &y, &result);
    printf("Gia tri cua x = %d\n", x);
    printf("Gia tri cua y = %d\n", y);
    printf("Tong cua x va y la: %d\n", result);

    return 0;
}

