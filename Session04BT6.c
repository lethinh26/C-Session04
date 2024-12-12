#include <stdio.h>
int main() {
	int dauThang, cuoiThang, kwh;
	float price;
	printf("Nhap so dien dau thang: ");
	scanf("%d", &dauThang);
	printf("Nhap so dien cuoi thang: ");
	scanf("%d", &cuoiThang);
	kwh = cuoiThang - dauThang;
	if (0 <= kwh && kwh <= 50) {
		price = 10.000;
	}else if (50 <= kwh && kwh < 100) {
		price = 15.000;
	}else if (100 <= kwh && kwh < 150) {
		price = 20.000;
	}else if (150 <= kwh && kwh < 200) {
		price = 25.000;
	}else if (200 <= kwh) {
		price = 30.000;
	}
	printf("Tien dien tieu thu: %.3f", kwh*price);
	return 0;
}
