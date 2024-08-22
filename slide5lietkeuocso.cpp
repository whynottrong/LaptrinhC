#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	for(int i=1; i<=n; i++){
		if(n%i==0)
			printf("%d\n", i);
	}
}
