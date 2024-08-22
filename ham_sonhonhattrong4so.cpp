#include <stdio.h>
int min(int a, int b, int c, int d){
	int min=a;
	if(b < min) 
		min=b;
	if(c < min)
		min=c;
	if(d<min)
		min=d;
	return min;
}
int main(){
	int a, b, c, d;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu 2: ");
	scanf("%d", &b);
	printf("Nhap so thu 3: ");
	scanf("%d", &c);
	printf("Nhap so thu 4:");
	scanf("%d", &d);
	printf("\nSo nho nhat trong 4 so la: %d", min(a,b,c,d));
}
