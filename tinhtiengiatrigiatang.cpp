#include <stdio.h>
int main(){
	char tensanpham[30];
	int soluong;
	float dongia;
	printf("Nhap ten san pham: ");
	scanf("%s", tensanpham);
	printf("Nhap so luong san pham: ");
	scanf("%d", &soluong);
	printf("Nhap don gia san pham: ");
	scanf("%f", &dongia);
	float tien = soluong*dongia;
	float thue = tien*0.1;
	printf("Ten san pham: %s", tensanpham);
	printf("\nSo luong: %d", soluong);
	printf("\nTong tien: %f", tien);
	printf("\nThue gia tri gia tang: %f", thue);
}
