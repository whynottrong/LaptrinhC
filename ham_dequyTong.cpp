#include <stdio.h>

int dequy(int n){
	if(n==0)
		return 0;
	else
		return dequy(n-1) + n;
}

int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	for(int i=0; i<=n; i++){
		printf(" %d", dequy(i));
	}
}
