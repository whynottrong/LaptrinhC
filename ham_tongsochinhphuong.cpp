#include <stdio.h>
#include <math.h>
bool checksochinhphuong(int n){
	int p=sqrt(n);	
	if(p*p==n)
		return true;
	else
		return false;
}
int tongsochinhphuong(int n){
	int S=0;
	for(int i=1;i<n;i++){
		if(checksochinhphuong(i)==1)
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
	
	printf("\nTong co so chinh phuong nho hon %d la S=%d", n, tongsochinhphuong(n));
}
