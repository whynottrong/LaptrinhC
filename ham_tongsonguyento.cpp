#include <stdio.h>
#include <math.h>
bool checksonguyento(int n){
	int uoc=0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
			uoc++;
	}
	
	if(uoc==2)
		return true;
	else
		return false;
}
int tongsonguyento(int n){
	int S=0;
	for(int i=1;i<n;i++){
		if(checksonguyento(i)==1)
			S=S+i;
	}
	return S;
}
int main()
{
	int n;
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
	}while(n<=0);
	
	printf("\nTong co so nguyen to nho hon %d la S=%d", n, tongsonguyento(n));
}
