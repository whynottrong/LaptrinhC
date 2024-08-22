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
void gopmang(int a[],int na, int b[],int nb,int c[], int &nc){
	nc=0;
	for(int i=0; i<na; i++){
		c[nc]=a[i];
		nc++;
	}
	for(int i=0; i<nb; i++){
		c[nc]=b[i];
		nc++;
	}
}
int main(){
	int n, a[MAX], nb, b[MAX], nc, c[MAX];
	printf("Nhap mang a\n");
	Nhapmang(a,n);
	Xuatmang(a,n);
	printf("\nNhap mang b\n");
	Nhapmang(b,nb);
	Xuatmang(b,nb);
	gopmang(a,n,b,nb,c,nc);
	printf("\nMang c la\n");
	Xuatmang(c,nc);
	
}
