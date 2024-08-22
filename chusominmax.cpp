#include <stdio.h>

int main(){
	int n, min, max, donvi;
	
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	
	
	min=n%10;
	max=min;
	n=n/10;
	
	while(n>0){
		donvi=n%10;
		n=n/10;
		if(donvi<min)
			min=donvi;
		if(donvi>max)
			max=donvi;
	}
	printf("\nSo nho nhat la: min = %d", min);
	printf("\nSo lon nhat la: max = %d", max);
	
}
