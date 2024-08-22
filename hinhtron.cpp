#include <stdio.h>
int main(){
	float r;
	printf("Nhpa ban kinh cua hinh tron: ");
	scanf("%f", &r);
	float pi=3.1415;
	float S=r*r*pi;
	float C=2*pi*r;
	
	printf("Dien tich hinh tron la: %.2f", S);
	printf("\nCHu vi cua hinh tron la: %.2f", C);
}
