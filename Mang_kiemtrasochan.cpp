#include <stdio.h>
#define MAX 100
void Nhapmang(int a[], int &n);
void Xuatmang(int a[],int n);
bool checksochan(int n);
int demsochan(int a[], int n);
void insochan(int a[], int n);
void tinhchatmang(int a[], int n);

void tachsochan(int a[], int n, int b[], int &nb){
	nb=0;
	for(int i=0; i<n; i++){
		if(checksochan(a[i])==1){
			b[nb]=a[i];
			nb++;
		}
	}
}

int demsochan(int a[], int n){
	int dem=0;
	for(int i=0; i<n; i++){
		if(checksochan(a[i])==true)
			dem++;
	}
	return dem;
}

void tinhchatmang(int a[], int n){
	if(demsochan(a,n)==n){
		printf("\nMang toan la so chan");
	}
	else
		printf("\nMang khong toan la so chan");
}

bool checksochan(int n){
	for(int i=0; i<=n; i++){
		if(n%2==0)
			return true;
		else
			return false;
	}
}

void Nhapmang(int a[],int &n){
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
	}while(n<=0);
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d", &a[i]);
	}
}
void Xuatmang(int a[],int n){
	for(int i=0; i<n; i++){
		printf("%d\t", a[i]);
	}
}
int main(){
	int n, a[MAX], nb, b[MAX];
	Nhapmang(a,n);
	printf("\nMang a gom:\n");
	Xuatmang(a,n);
	tinhchatmang(a,n);
	tachsochan(a,n,b,nb);
	printf("\nMang b gom:\n");
	Xuatmang(b,nb);
}
