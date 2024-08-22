#include <stdio.h>

int sole(int n){
	int S=0;
	for(int i=0; i<=n; i++){
		if(i%2!=0)
			S=S+i;	
	}
	return S;
}
int main(){
	int n;
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
	}while(n<=0);
	printf("\nTong cac so le nho hon %d la S=%d", n, sole(n));
}
