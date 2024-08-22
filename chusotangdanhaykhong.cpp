#include <stdio.h>
//void main()
//{
//	int n, sotruoc, sosau;
//	…	// Nh?p n
//	sotruoc = n % 10;
//	do
//	{
//		sosau = sotruoc;
//		n = n / 10;
//		sotruoc = n % 10;
//	} while (n != 0 && sotruoc < sosau);
//
//	if (sotruoc < sosau)
//		printf(“Cac chu so tang dan”);
//	else
//		printf(“Cac chu so ko tang dan”);
//}
int main(){
	int n, sotruoc, sosau;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	sotruoc=n%10;
	do{
		sosau =  sotruoc;
		n=n/10;
		sotruoc = n%10;
	}while(n!=0 && sotruoc<sosau);
	
	if(sotruoc < sosau)
		printf("\nCac chu so tang dan");
	else
		printf("\nCac chu so khong tang dan");
}
