#include <stdio.h>

int main(){
	int a, b, c, d;
	
	printf("Nhap vao lan 4 so nguyen a, b, c ,d: ");
	scanf("%d%d%d%d", &a,&b,&c,&d);
	
	int min=a;
	
	if(min>b)
		min=b;
	if(min>c)
		min=c;
	if(min>d)
		min=d;
	printf("/nSo nho nhat trong 4 so la: %d", min);
}
