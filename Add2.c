#include <stdio.h>

int isFactorial(int n) {
    int fact = 1, i = 1;
    while (fact < n) {
        i++;
        fact *= i;
    }
    return fact == n;
}

int isFibonacci(int n) {
    int a = 0, b = 1;
    while (b < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b == n || n == 0;
}

int isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return n != 1 && sum == n;
}

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isSymmetric(int n) {
    int reversed = 0, temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return n == reversed;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isFactorial(n) && isFibonacci(n) && isPerfect(n) && isPrime(n) && isSymmetric(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

