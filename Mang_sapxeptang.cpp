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
void hoanvi(int &x, int &y){
	int tam;
	tam=x;
	x=y;
	y=tam;
}
void sapxeptang(int a[], int n){
	printf("\nMang sau da duoc sap xep tang dan\n");
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j])
				hoanvi(a[i],a[j]);
		}
	}
}
void sapxepgiam(int a[], int n){
	printf("\nMang sau da duoc sap xep giam dan\n");
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] < a[j])
				hoanvi(a[i],a[j]);
		}
	}
}
int main(){
	int n, a[MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	sapxeptang(a,n);
	Xuatmang(a,n);
	sapxepgiam(a,n);
	Xuatmang(a,n);
}
