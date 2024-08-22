#include <stdio.h>

int main(){
	int a, b, c, d;
	
	printf("Nhap vao lan 4 so nguyen a, b, c ,d: ");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	int tam;
	if(a>b){
		tam=a; a=b; b=tam;
	}
	if(a>c){
		tam=a; a=c; c=tam;
	}
	if(a>d){
		tam=a; a=d; d=tam;
	}
	if(b>c){
		tam=b; b=c; c=tam;
	}
	if(b>d){	
		tam=b; b=d; d=tam;
	}
	if(c>d){
		tam=c; c=d; d=tam;
	}
	printf("Thu tu sap xep la: % d %d %d %d", a,b,c,d);
}
