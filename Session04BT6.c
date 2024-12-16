#include <stdio.h>
int main() {
	int dauThang, cuoiThang, kwh;
	float price;
	printf("Nhap so dien dau thang: ");
	scanf("%d", &dauThang);
	printf("Nhap so dien cuoi thang: ");
	scanf("%d", &cuoiThang);
	kwh = cuoiThang - dauThang;
	if (0 < kwh && kwh < 50) {
		price = 10*kwh;
	}else if (50 <= kwh && kwh < 150) {
		price = 10*50 + (kwh-49)*15;
	}else if (150 <= kwh && kwh < 200) {
		price = 10*50 + 100*15 + (kwh-149)*20;
	}else {
		price = 10*50 + 100*15 + 100*20 + (kwh-199)*25;
	}
	printf("Tien dien tieu thu: %.3f", price);
	return 0;
}
