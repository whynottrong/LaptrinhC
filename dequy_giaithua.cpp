#include <stdio.h>

int giaithua(int n){
	if(n==1 || n==0)
		return 1;
	else
		return giaithua(n-1)*n;
}

int main(){
	int n;
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
	}while(n<0);
	
	printf("%d!=%d", n, giaithua(n));
}
