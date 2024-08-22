#include <stdio.h>
#include <math.h>
int main() {
	int n, x;
	do{
		printf("Nhap lan luot 2 so n va x: ");
		scanf("%d%d", &n, &x);
	}while(n<=0 && x<=0);
	
	float S=0;
	for(int i=1; i<=n; i++){
		S=S+1/(i*1.0*(pow(x,i+1)));
	}
	printf("\nTong S=%.2f", S);
}
