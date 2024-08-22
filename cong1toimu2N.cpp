#include <stdio.h>

int main(){
	int n, S=0;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<0);
	
	for(int i=1; i<=n; i++){
		S=S+i*i;
	}
	
	printf("\nS=1*1+2*2+..+%d=%d",n, S);
}
