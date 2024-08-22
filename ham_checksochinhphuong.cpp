#include <stdio.h>
#include <math.h>

bool check(int n){
	int p=sqrt(n);
	if(p*p==n)
		return 1;
	else
		return 0;
}
int main(){
	int n, p, q;
	
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n<=0);
	

	
	if(check(n)==true)
		printf("\nn la so chinh phuong");
	else
		printf("\nn khong phai la so chinh phuong");
}
