#include <stdio.h>

int main(){
	float diemtoan, diemly, diemhoa;
	printf("Nhap diem toan: ");
	scanf("%f", &diemtoan);
	printf("Nhap diem ly: ");
	scanf("%f", &diemly);
	printf("Nhap diem hoa: ");
	scanf("%f", &diemhoa);
	
	float diemtb=(diemtoan+diemly+diemhoa)/3;
	printf("Diem trung binh cua ban la: %.2f", diemtb);
}
