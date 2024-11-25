#include <stdio.h>

int main(){
    int n =10;
    int k;

    do {
        printf("Moi ban nhap 1 so bat ky: ");
        scanf("%d", &k);
    } while (k != n);

    printf("Ban nhap dung so");

    return 0;
}
