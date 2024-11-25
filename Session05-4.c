#include <stdio.h>

int main() {
    int n, i;

    do {
        printf("Moi ban nhap vao 1 so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);
    } while (n < 1 || n > 10);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
