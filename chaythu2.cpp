#include <stdio.h>
//
//void findSpecialNumber(int n)
//{
//    int x=1;
//    int sum=0;
//
//    while (1){
//        sum =  sum + x;
//        if(sum >=n){
//            break;
//        }
//        x++;
//        printf("%d\n", x);
//    }
////    printf("\nSo can tim la x=%d, %d,", x);
//}
//int main(){
//    int n;
//    do{
//        printf("Nhap so nguyen duong n: ");
//        scanf("%d", &n);
//    }while(n<=0);
//    findSpecialNumber(n);
//}

int findSpecialNumber(int n){
   int a[100000];
   a[1]=1;
   for (int i=1; i <= n; i++){
      if (a[i] == 0){
         a[i]=a[i-1]+1;
         for (int j=i+1; j < i+a[a[i]]; j++){
            a[j]=a[i];
         }
      }
   }
   return(a[n]);
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("\nSO can tim la: %d", findSpecialNumber(n));	
}
