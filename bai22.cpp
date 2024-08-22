#include <stdio.h>

// Hàm ki?m tra m?t s? có ph?i là s? nguyên t? hay không
int isPrime(int number) {
    if (number <= 1) {
        return 0; // Không ph?i s? nguyên t?
    }
    if (number <= 3) {
        return 1; // 2 và 3 là s? nguyên t?
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return 0; // N?u chia h?t cho 2 ho?c 3 thì không ph?i s? nguyên t?
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0; // N?u chia h?t cho 5 ho?c 7 (và các s? d?ng 6k ± 1) thì không ph?i s? nguyên t?
        }
    }
    return 1; // Các tru?ng h?p còn l?i là s? nguyên t?
}

// Hàm tính t?ng các s? nguyên t? nh? hon n
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

