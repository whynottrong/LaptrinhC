#include <stdio.h>


//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int x = 5, y = 10;
//    printf("Before swap: x = %d, y = %d\n", x, y);
//    swap(&x, &y);
//    printf("After swap: x = %d, y = %d\n", x, y);
//    return 0;
//}

//void swap(int a, int b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}
//int main(){
//	int a=1, b=2;
//	printf("a=%d\nb=%d", a, b);
//	swap(a,b);
//	printf("\na=%d\nb=%d", a, b);
//}

#include <stdio.h>

void truyendiachi(int &a) {
    a = a + 1;
    printf("num khi truyen dia chi: %d\n", a);
}
void truyengiatri(int a) {
    a = a + 1;
    printf("num khi truyen gia tri: %d\n", a);
}
int main() {
	int num=5;
    
//    do{
//    	printf("Nhap num: ");
//    	scanf("%d", &num);
//	}while(num<0);
    truyendiachi(num);
    printf("num ngoai ham: %d\n", num);
    truyengiatri(num);
    printf("num ngoai ham: %d\n", num);
    return 0;
}

