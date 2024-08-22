#include <stdio.h>
int main(){
	int a;
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	switch(a)
	{
		case 1: printf("Mot"); break;
		case 2: printf("Hai"); break;
		case 3: printf("Ba"); break;
		case 4: printf("Bon"); break;
		case 5: printf("Nam"); break;
		case 6: printf("Sau"); break;
		case 7: printf("Bay"); break;
		case 8: printf("Tam"); break;
		case 9: printf("Chin"); break;
		default: printf("Khong doc duoc");
	}
}
