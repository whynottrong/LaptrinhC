#include <stdio.h>
#include <math.h>

void checksonguyento(int n){
	int uoc=0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
			uoc++;
	}
	
	if(uoc==2)
		printf("\nn la so nguyen to");
	else
		printf("\nn khong phai la so nguyen to");
}
int main(){
	int n;
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
	}while(n<=0);
	checksonguyento(n);
}
//int main(){
//	int n, i, souoc;
//	printf("Nhap n : ");
//	scanf("%d", &n);
//	souoc=0;
//	for(int i=1; i<=n; i++){
//		if(n%i==0)
//			souoc++;
//	
//	}
//	if(souoc==2)
//		printf("n la so nguyen to");
//	else 
//		printf("n khong phai so nguyen to");
//}
