#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=0);
	int S=0;
	for(int i=1; i<=n; i++){
		if(n%i==0 && i%2==0)
			S=S+i;
	}
	printf("\nTong cac uoc so chan cua %d la S=%d", n, S);
}
