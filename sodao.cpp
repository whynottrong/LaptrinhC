#include <stdio.h>

int main(){
	int n, donvi, sodao=0;
	do{
		printf("Nhap so nguyen n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	while(n>0){
		donvi=n%10;
		sodao=sodao*10+donvi;
		n=n/10;	
	}
	printf("\nSo dao cua n la %d ", sodao);
}
