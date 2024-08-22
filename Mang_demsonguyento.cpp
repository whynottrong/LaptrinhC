#include <stdio.h>
#define MAX 100
#include <math.h>

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
bool checksonguyento(int n){
	if(n<2)
		return false;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return false;
	return true;
}
int demsonguyento(int a[], int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(checksonguyento(a[i])==true)
			dem++;
	}
	return dem;
}
//void tinhchatmang(int a[], int n){
//	if(demsonguyento(a,n)==n)
//		printf("\nMang toan so nguyen to");
//	else
//		printf("\nKhong phai mang toan so nguyen to");
//}
int main(){
	int a[MAX], n, x, vt;
	Nhapmang(a,n);
	Xuatmang(a,n);
	printf("\n Co %d so nguyen to xuat hien trong mang", demsonguyento(a,n));
//	tinhchatmang(a,n);
}
