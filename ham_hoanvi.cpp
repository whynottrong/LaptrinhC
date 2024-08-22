#include <stdio.h>

void hoanvi(int &a, int &b){
	int tam=a;
	a=b;
	b=tam;
}
int main(){
	int a, b;
	printf("Nhap 2 so a, b: ");
	scanf("%d%d", &a, &b);
	printf("\na=%d\nb=%d", a, b);
	hoanvi(a,b);
	printf("\nSau khi hoan vi\na=%d\nb=%d", a, b);
}
