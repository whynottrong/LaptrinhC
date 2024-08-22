//#include <stdio.h>

//int main(){
//	int a, b, c;
//	
//	printf("Nhap lan luot ba canh cua tam giac: ");
//	scanf("%d%d%d", &a, &b, &c);
//	
//	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a))
//		printf("\n Hop le! Ba canh nay tao thanh tam giac");
//		
//		
//	else{
//		if((a*a+b*b>c*c) || (a*a+c*c>b*b) || (b*b+c*c>a*a))
//			printf("\nLa tam giac tu");
//		else if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
//			printf("\nLa tam giac vuong");
//		else if((a*a+b*b<c*c) || (a*a+c*c<b*b) || (b*b+c*c<a*a))
//			printf("\nLa tam giac nhon");
//	}
//}

#include <stdio.h>

int main() {
    int a, b, c;

    // Nh?p d? dài ba c?nh t? ngu?i dùng
    printf("Nhap lan luot ba canh cua tam giac: ");
	scanf("%d%d%d", &a, &b, &c);

    // Ki?m tra di?u ki?n là tam giác
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        printf("\n Hop le! Ba canh nay tao thanh tam giac", a, b, c);

        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            printf("\nTam giac nay la tam giac vuong");
        else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a)
            printf("\nTam giac nay la tam giac tu");
        else
            printf("\nTam giac nay la tam giac nhon");
    } else {
        printf("\nKhong tao thanh tam giac", a, b, c);
    }

    return 0;
}

