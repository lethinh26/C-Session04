#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Nhap so dau tien: ");
    scanf("%d", &num1);
    printf("Nhap so dau thu 2: ");
    scanf("%d", &num2);
    printf("Nhap so dau thu 3: ");
    scanf("%d", &num3);
    if (num1 <= num2 && num2 <= num3) {
        printf("%d, %d, %d", num1, num2, num3);
    } else if (num1 <= num3 && num3 <= num2) {
        printf("%d, %d, %d", num1, num3, num2);
    } else if (num2 <= num1 && num1 <= num3) {
        printf("%d, %d, %d", num2, num1, num3);
    } else if (num2 <= num3 && num3 <= num1) {
        printf("%d, %d, %d", num2, num3, num1);
    } else if (num3 <= num1 && num1 <= num2) {
        printf("%d, %d, %d", num3, num1, num2);
    } else if (num3 <= num2 && num2 <= num1) {
        printf("%d, %d, %d", num3, num2, num1);
    }
    
    return 0;
}
