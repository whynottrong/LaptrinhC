#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap lan luot 2 so a va b: ");
	scanf("%d%d", &a, &b);
	
	while(a!=b){
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	printf("\nUSCLN cua a va b: %d", a);
}
