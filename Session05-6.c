#include <stdio.h>

int main() {
    int num1, num2, choice;

    do {
        printf(" CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Moi ban nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Moi ban nhap so thu hai: ");
                scanf("%d", &num2);
                printf("Tong = %d\n", num1 + num2);
                break;
            case 2:
                printf("Moi ban nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Moi ban nhap so thu hai: ");
                scanf("%d", &num2);
                printf("hieu = %d\n", num1 - num2);
                break;
            case 3:
                printf("Moi ban nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Moi ban nhap so thu hai: ");
                scanf("%d", &num2);
                printf("Tich = %d\n", num1 * num2);
                break;
            case 4:
                printf("Moi ban nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Moi ban nhap so thu hai: ");
                scanf("%d", &num2);
                printf("Thuong = %d\n", num1 / num2);
                break;
            case 5:
                printf("Chuong trinh ket thuc\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while (choice != 5);

    return 0;
}
