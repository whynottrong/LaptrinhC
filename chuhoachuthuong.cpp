#include <stdio.h>
int main(){
	char kytu;
	printf("Nhap ky tu: ");
	scanf("%c", &kytu);
	if(kytu >='a' && kytu <= 'z')
		kytu = kytu-32;
	else if(kytu >='A' && kytu <='Z')
		kytu = kytu +32;
	printf("Ky tu sau khi doi la: %c", kytu);
}
