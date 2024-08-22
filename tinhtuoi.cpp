#include <stdio.h>

int main(){
	int namsinh, namhientai;
	printf("Nhap nam sinh cua ban: ");
	scanf("%d", &namsinh);
	printf("Nhap nam hien tai : ");
	scanf("%d", &namhientai);
	int tuoi= namhientai-namsinh;
	printf("Tuoi cua ban la: %d", tuoi);
}
