#include <stdio.h>
int main() {
	int a,b,c;
	printf("Nhap canh dau tien: ");
	scanf("%d", &a);
	printf("Nhap canh dau thu 2: ");
	scanf("%d", &b);
	printf("Nhap canh dau thu 3: ");
	scanf("%d", &c);
	if (a+b > c && a+c > b && b+c > a) {
		printf("La 3 canh tam giac");
	}else {
		printf("Khong la 3 canh tam giac");
	}
}
