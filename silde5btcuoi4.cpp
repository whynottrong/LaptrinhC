#include <stdio.h>
int main() {
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=0);
	float S=0;
	for(int i=1; i<=n; i++){
		S=S+i*1.0/(i+1);
	}
	printf("\nTong S=%.2f", S);
}
