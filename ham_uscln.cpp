#include <stdio.h>

int uscln(int a, int b){
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	return a;		
}
int main(){
	int a, b;
	do{
		printf("Nhap 2 so nguyen duong a va b: ");
		scanf("%d%d", &a, &b);
	}while(a<=0 && b<=0);
	
	printf("\nUSCLN cua %d va %d la %d", a, b, uscln(a,b));
}
