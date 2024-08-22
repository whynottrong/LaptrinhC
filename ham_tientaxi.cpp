#include <stdio.h>

int tientaxi(int km){
	int tien;
	if(km==1){
		tien=15000*km;
	}
	else if(km<=5){
		tien=15000+(km-1)*13500;
	}
	else{
		tien=15000+4*13500+(km-5)*11000;
	}
		
	if(km>=120){
		tien=tien*0.9;
	}
	return tien;
}

int main(){
	int n;
	do{
		printf("Nhap so km da di: ");
		scanf("%d", &n);
	}while(n<=0);
	printf("\nSo tien phai tra la: %d", tientaxi(n));
}
