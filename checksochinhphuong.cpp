#include <stdio.h>
#include <math.h>

int main(){
	int n, p, q;
	
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	p = sqrt(n);
	
	if(p*p == n)
		printf("\nn la so chinh phuong");
	else
		printf("\nn khong phai la so chinh phuong");
}
