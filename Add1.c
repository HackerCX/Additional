#include <stdio.h>

int hasThree(int n) {
    while (n > 0) {
        if (n % 10 == 3) return 1;
        n /= 10;
    }
    return 0;
}

int hasNoFive(int n) {
    while (n > 0) {
        if (n % 10 == 5) return 0;
        n /= 10;
    }
    return 1;
}

int isIncreasing(int n) {
    int last = 10;
    while (n > 0) {
        int digit = n % 10;
        if (digit > last) return 0;
        last = digit;
        n /= 10;
    }
    return 1;
}

int isNotDecreasing(int n) {
    int last = 10;
    while (n > 0) {
        int digit = n % 10;
        if (digit < last) return 0;
        last = digit;
        n /= 10;
    }
    return 1;
}

int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int productDigits(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int main() {
    int n;
    scanf("%d", &n);

    if (hasThree(n) && hasNoFive(n) && isIncreasing(n) && !isNotDecreasing(n) && sumDigits(n) > 20 && productDigits(n) < 30)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

