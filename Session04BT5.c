#include <stdio.h>
int main() {
	int num1, num2, num3;
	printf("Nhap vao so dau tien: ");
	scanf("%d", &num1);
	printf("Nhap vao so cuoi cung: ");
	scanf("%d", &num2);
	printf("Nhap vao so can kiem tra: ");
	scanf("%d", &num3);
	if (num1 <= num3 && num3 <= num2) {
		printf("%d nam trong khoang tu %d den %d", num3, num1, num2);
	}else {
		printf("%d ko nam trong khoang tu %d den %d", num3, num1, num2);
	}
	return 0;	
}
