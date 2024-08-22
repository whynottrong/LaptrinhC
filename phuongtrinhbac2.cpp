#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	
	// Nhap vao 3 so abc
	
	printf("Nhap vao lan luot ba so a, b, c: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a==0) //phuong trinh tro thanh phuong trinh bac nhat bx+c=0
	{
		if(b==0) // 0x+c=0
		{
			if(c==0) 
				printf("\nPhuong trinh co vo so nghiem");
			else
				printf("\nPhuong trinh vo nghiem");
		}
		else
			printf("\nPhuong trinh co nghiem duy nhat: x=%.2f", -c/a);
	}
	else
	{
		float delta= b*b-4*a*c;
		if(delta < 0)
			printf("\nPhuong trinh vo nghiem");
		else if(delta == 0)
			printf("\nPhuong trinh co nghiem duy nhat x=%f.2", -b/(2*a));
		else
			printf("\nPhuong trinh co 2 nghiem phan biet: \nx1=%.2f\nx2=%.2f", (-b-sqrt(delta))/(2*a), (-b+sqrt(delta))/(2*a));
	}
}
