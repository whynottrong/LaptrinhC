#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<0);
	int S=1;
	for(int j=1; j<=n; j++){
		S=S*j;
	}
	printf("\nS=1!+2!+..+%d!=%d",n, S);
	
}


