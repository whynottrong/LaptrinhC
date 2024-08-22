#include <stdio.h>
#include <math.h>

int main()
{
	int n, uoc;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	uoc=0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
			uoc++;
	}
	
	if(uoc==2)
		printf("\nn la so nguyen to");
	else
		printf("\nn khong phai la so nguyen to");
}
