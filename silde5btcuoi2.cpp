#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	float S=0;
	for(int i=1; i<=n; i++)
		S=S+1/(2*i*1.0+1);
	
	printf("\nTong S=%.2f", S);
}
