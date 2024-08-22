#include <stdio.h>

int main(){
	int n;
	float S=0;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<0);
	
	for(int i=1; i<=n; i++){
		S=S+1.0/i;
	}	
	printf("\nS=1+1/2+...+1/%d=%f", n, S);
}
