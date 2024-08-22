#include <stdio.h>
int main() {
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=0);
	float S=0;
	int N;
	for(int i=1; i<=n; i++){
		N=0;
		for(int j=1; j<=i; j++){
			N=N+j;
		}
		S=S+1*1.0/N;
	}
	printf("\nTong S=%.2f", S);
}
