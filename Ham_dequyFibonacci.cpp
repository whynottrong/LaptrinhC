#include <stdio.h>

int dequy(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return dequy(n-1) + dequy(n-2);
	}
}

int main(){
	int n;
	do{
		printf("Nhap so nguyen duong n: ");
		scanf("%d", &n);
	}while(n<=0);
	
	for(int i=0; i<n; i++){
		printf(" %d", dequy(i));
	}
}
//#include <stdio.h>
//
//// H�m d? quy d? t�nh s? Fibonacci th? n
//int fibonacci(int n) {
//    if (n <= 1) {
//        return n;
//    }
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//    int n, i;
//
//    // Nh?p v�o s? ph?n t? c?a d�y Fibonacci c?n in ra
//    printf("Nh?p s? ph?n t? c?a d�y Fibonacci: ");
//    scanf("%d", &n);
//
//    printf("D�y Fibonacci: ");
//    for (i = 0; i < n; i++) {
//        printf("%d ", fibonacci(i));
//    }
//
//    return 0;
//}

