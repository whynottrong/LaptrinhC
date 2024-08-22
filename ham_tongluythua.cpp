#include <stdio.h>
#include <math.h>
int dequy(int n){
	if(n==1)
		return 1;
	else
		return dequy(n-1)*dequy(n-1)+n*n;
}
int tongluythua(int n){
	int S=0;
	for(int i=1; i<=n; i++){
		S=S+i*i;
	}
	return S;
}
int main(){
	int n;
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
	}while(n<=0);
	printf("\nS=%d", tongluythua(n));
}
