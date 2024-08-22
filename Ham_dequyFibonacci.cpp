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
//// Hàm d? quy d? tính s? Fibonacci th? n
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
//    // Nh?p vào s? ph?n t? c?a dãy Fibonacci c?n in ra
//    printf("Nh?p s? ph?n t? c?a dãy Fibonacci: ");
//    scanf("%d", &n);
//
//    printf("Dãy Fibonacci: ");
//    for (i = 0; i < n; i++) {
//        printf("%d ", fibonacci(i));
//    }
//
//    return 0;
//}

