#include <stdio.h>
#define MAX 100


void Nhapmang(int a[],int &n){
	do{
		printf("Nhap so phan tu cua mang: ");
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
int timkiem(int a[], int n, int x){
	for(int i=0; i<n; i++){
		if(a[i]==x)
			return i;
	}
	return -1;
}
void thuchientimkiem(int a[], int n, int x){
	if(timkiem(a,n,x)==-1)
		printf("\nKhong tim thay vi tri phan tu");
	else
		printf("Vi tri tri cua phan tu la: %d", timkiem(a,n,x));
		
}
int main(){
	int a[MAX], n, x, vt;
	Nhapmang(a,n);
	Xuatmang(a,n);
	printf("\nNhap phan tu can tim: ");
	scanf("%d", &x);
	thuchientimkiem(a,n,x);
}
