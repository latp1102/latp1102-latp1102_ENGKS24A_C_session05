#include <stdio.h>

int main(){
    int soChoTruoc, soNhap;

    printf("Moi ban nhap so cho truoc: ");
    scanf("%d", &soChoTruoc);

    do {
        printf("Moi ban nhap 1 so: ");
        scanf("%d", &soNhap);
    } while (soNhap != soChoTruoc);

    printf("Ban nhap dung so");

    return 0;
}
