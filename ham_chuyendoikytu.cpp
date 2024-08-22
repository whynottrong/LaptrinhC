#include <stdio.h>

char chuyendoi(char kytu){
	if(kytu >='a' && kytu <= 'z')
		return kytu-32;
	else if(kytu >='A' && kytu <='Z')
		return kytu +32;
}
int main(){
	char kytu;
	printf("Nhap ky tu: ");
	scanf("%c", &kytu);
	printf("Ky tu sau khi doi la: %c", chuyendoi(kytu));
}
