#include <stdio.h>


int sodao(int n){
	int donvi, sodao=0;
	while(n>0){
		donvi=n%10;
		sodao=sodao*10+donvi;
		n=n/10;
	}
	return sodao;
}
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d",&n);
	}while(n<0);
	printf("\nSo dao cua %d la %d", n, sodao(n));
}
