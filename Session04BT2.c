#include <stdio.h>
int main() {
	int num;
	printf("Nhap vao so nguyen: ");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("%d la so chan", num);
	}else {
		printf("%d la so le", num);
	}
	return 0;	
}
