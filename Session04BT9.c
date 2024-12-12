#include <stdio.h>
int main() {
	int day,month,year,check=1;
	printf("Nhap ngay: ");
	scanf("%d", &day);
	printf("Nhap thang: ");
	scanf("%d", &month);
	printf("Nhap nam: ");
	scanf("%d", &year);
	if (month >= 1 && month <= 12 && day >= 1 && day <= 31) {
		if (month % 2 == 0) {
			if (month == 2) {
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
					if (day > 29) {
						check = 0;
					}
				}else {
					if (day > 28) {
						check = 0;
					}
				}
			}else {
				if (day == 31) {
					check = 0;
				}
			}
		}
	}else {
		check = 0;
	}
	
	if (check == 1) {
		printf("%d/%d/%d hop le", day, month, year);
	}else {
		printf("%d/%d/%d khong hop le", day, month, year);
	}
}
