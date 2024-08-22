#include <stdio.h>

float dequy(int n){
	if(n==1)
		return 1;
	else
		return dequy(n-1) + 1.0/n;
}

int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	printf(" %f",dequy(n));
	
//	for(int i=1; i<=n; i++){
//		printf(" %d = %f*",i, dequy(i));
//	}
}
