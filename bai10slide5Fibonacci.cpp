#include <stdio.h>
int main(){
	int n, n1, n2;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=0);
	n1=0; n2=1;
	int n3;
	printf("%d\n", n1);
	printf("%d\n", n2);
	for(int i=0; i<=n; i++){
		n3=n1+n2;
		printf("%d\n", n3);
		n1=n2;
		n2=n3;
	}
}
