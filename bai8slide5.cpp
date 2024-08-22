#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n!=99);
	for(int i=10; i<=n;i++){
		int i1=i%10;
		int i2=i/10;
		if(i1*i2==2*(i1+i2))
			printf("%d\n", i);
	}
}
