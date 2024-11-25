#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Moi ban nhap vao 1 so duong n: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("La so duong\n");
    } else {
        for (i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Tong cac so tu 1 den so duoc nhap %d la: %d", n, sum);
    }

    return 0;
}
