#include <stdio.h>
int main() {
	int num;
	printf("Nhap vao so nguyen: ");
	scanf("%d", &num);
	if (num % 5 == 0 && num % 3 == 0) {
		printf("%d chia het cho 3 va 5", num);
	}else if (num % 5 == 0){
		printf("%d chia het cho 5", num);
	}else if (num % 3 == 0) {
		printf("%d chia het cho 3", num);
	}
	return 0;	
}
