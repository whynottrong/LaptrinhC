#include <stdio.h>

int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<0);
	int S=0;
	for(int i=1; i<=n; i++)
		S=S+i;
	printf("\nS=1+2+..+%d=%d",n, S);
}
