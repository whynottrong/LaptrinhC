#include <stdio.h>
#include <ctype.h>

//int main() {
//    char bienSo[10];
//    int i, sum = 0;
//
//    // Nh?p bi?n s? xe
//    printf("Nhap bien so xe: ");
//    scanf("%s", bienSo);
//
//    // T�nh t?ng c�c ch? s?
//    for (i = 0; bienSo[i] != '\0'; i++) {
//        if (isdigit(bienSo[i])) {
//            sum += (bienSo[i] - '0'); // L?y gi� tr? s? c?a k� t? v� c?ng v�o t?ng
//        }
//    }
//
//    // L?y ph?n don v? c?a t?ng
//    int donVi = sum % 10;
//
//    // In s? n�t
//    printf("So nut bien so la: %d\n", donVi);
//
//    return 0;
//}
int main(){
	int n;
	printf("Nhap bien so xe co 5 chu so: ");
	scanf("%d", &n);
	
	int n1=n%10; n=n/10;
	int n2=n%10; n=n/10;
	int n3=n%10; n=n/10;
	int n4=n%10; n=n/10;
	int n5=n%10; n=n/10;
	
	int sonut=(n1+n2+n3+n4+n5)%10;
	
	printf("So nut cua bien so xe ban la: %d", sonut);
	
}

