#include <stdio.h>

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

void print(int n) {
    while (n > 0) {
        int digit = n % 10;
        printf("%d0", digit);
        n /= 10;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int reversed = reverseNumber(n);
    prin(reversed);
    printf("\n");
    return 0;
}

