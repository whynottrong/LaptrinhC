#include <stdio.h>

int main(){
	int a, b, n;
	
	do{
//		printf("Nhap lan luot 3 so nguyen duong a, b, n: ");
//		scanf("%d%d%d", &a, &b, &n);
		printf("Nhap so nguyen duong a: ");
		scanf("%d", &a);
		printf("Nhap so nguyen duong b: ");
		scanf("%d", &b);
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(a>=n || b>=n);
	
	int S;
	for(int i=0; i<=n; i++){
		if(i%a==0 && i%b!=0)
			S=S+i;
	}
	printf("/n S=%d", 29%20);
	
}
