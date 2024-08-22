#include <stdio.h>

int main(){
	float cannang, chieucao;
	printf("Nhap can nang cua ban: ");
	scanf("%f", &cannang);
	printf("Nhap chieu cao cua ban: ");
	scanf("%f", &chieucao);
	float chisoBMI= cannang*1.0/(chieucao*chieucao);
	printf("Chi so BMI cua ban la: %.2f", chisoBMI);
}
