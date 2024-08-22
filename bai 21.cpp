#include <stdio.h>
#include <math.h>

int main(){
	int n;
	int i, j;
	int S=0;
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n<=0 || n>=50);
	
	for(i=2; i<n; i++){
		int	uoc=0;
		for(j=1; j<=i; j++){
			if(i%j==0)
				uoc++;
		}
		if(uoc == 2)
			S=S+i;
	}
	printf("\nTong cac so nguyen to S=%d", S);
}
