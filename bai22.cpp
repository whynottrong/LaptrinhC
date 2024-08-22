#include <stdio.h>

// H�m ki?m tra m?t s? c� ph?i l� s? nguy�n t? hay kh�ng
int isPrime(int number) {
    if (number <= 1) {
        return 0; // Kh�ng ph?i s? nguy�n t?
    }
    if (number <= 3) {
        return 1; // 2 v� 3 l� s? nguy�n t?
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return 0; // N?u chia h?t cho 2 ho?c 3 th� kh�ng ph?i s? nguy�n t?
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0; // N?u chia h?t cho 5 ho?c 7 (v� c�c s? d?ng 6k � 1) th� kh�ng ph?i s? nguy�n t?
        }
    }
    return 1; // C�c tru?ng h?p c�n l?i l� s? nguy�n t?
}

// H�m t�nh t?ng c�c s? nguy�n t? nh? hon n
int sumOfPrimes(int n) {
    int sum = 0;
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    int sum = sumOfPrimes(n);
    printf("Tong cac so nguyen to nho hon %d la: %d\n", n, sum);

    return 0;
}

