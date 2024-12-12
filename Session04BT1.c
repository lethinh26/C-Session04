#include <stdio.h>
int main() {
	int num;
	printf("Nhap vao so nguyen: ");
	scanf("%d", &num);
	if (num > 0) {
		printf("%d la so duong", num);
	} else if (num == 0) {
		printf("%d ko phai so duong cung khong phai so am", num);
	}else {
		printf("%d la so am", num);
	}
	return 0;
}
