#include <stdio.h>
#define MAX 100


void Nhapmang(int a[],int &n){
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
	}while(n<=0);
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d", &a[i]);
	}
}
void Xuatmang(int a[],int n){
	for(int i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
}
int main(){
	int n, a[MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
}
