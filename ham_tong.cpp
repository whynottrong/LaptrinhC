#include <stdio.h>
#include <math.h>
int dequy(int n){
	if(n==1)
		return 1;
	else
		return dequy(n-1)+n;
}
//int tong(int n){
//	int S=0;
//	for(int i=1; i<=n; i++){
//		S=S+i;
//	}
//	return S;
//}
int main(){
	int n;
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
	}while(n<=0);
	printf("\nS=%d", dequy(n));
}
