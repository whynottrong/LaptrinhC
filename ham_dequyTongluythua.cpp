#include <stdio.h>

int dequy(int n){
	if(n==1)
		return 1;
	else
		return dequy(n-1) + n*n;
}

int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	for(int i=1; i<=n; i++){
		printf(" %d",dequy(i));
	}
}
