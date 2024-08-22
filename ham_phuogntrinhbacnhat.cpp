#include <stdio.h>

void phuongtrinh(int a, int b){
	float x;
	if(a==0){
		if(b==0)
			printf("\nPhuong trinh vo so nghiem");
		else
			printf("\nPhuong trinh vo nghiem");
	}
	else
		x=-b*1.0/a;
		printf("\nGia tri cua x la: %.2f", x);
}

int main(){
	int a, b;
	float x;
	printf("GIAI PHUONG TRINH BAC NHAT");
	printf("\nNhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	printf("%d*x+%d=0", a, b);
	phuongtrinh(a,b);
}
