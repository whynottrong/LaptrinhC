#include <stdio.h>

//int main(){
//	int thang, nam;
//	printf("Nhap vao thang: ");
//	scanf("%d", &thang);
//	printf("Nhap vao nam: ");
//	scanf("%d", &nam);
//	if( thang < 1 || thang > 12)
//		printf("\nKhong hop le");
//	else if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
//		printf("\nThang nay co 31 ngay");
//	else if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
//		printf("\nThang nay co 30 ngay");
//	else if(thang == 2 && nam%4==0)
//		printf("\nThang nay co 29 ngay");
//	else if(thang ==2 && nam%4!=0)
//		printf("\nThang nay co 28 ngay");
//}
int main(){
	int month, year;
	
	printf("Input Month: ");
	scanf("%d", &month);
	printf("Input Year: ");
	scanf("%d", &year);
	
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("\nThang nay co 31 ngay");
			break;
		case 4: case 6: case 9: case 11:
			printf("\nThang nay co 30 ngay");
		case 2:
			if((year % 4 == 0 && year%100 !=0) || (year % 400 == 0))
				printf("\n Thang nay co 29 ngay");
			else
				printf("\nThang nay co 28 ngay");
			break;
		default:
			printf("\nKhong hop le");
	}
}

