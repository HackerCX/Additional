#include <stdio.h>

void printReversedDigitsInBase(int x, int p) {
    if (x == 0) {
        printf("0");
        return;
    }
    while (x > 0) {
        printf("%d", x % p);
        x /= p;
    }
}

int main() {
    int x, p;
    scanf("%d%d", &x, &p);

    if (p > 1 && p < 17)
        printReversedDigitsInBase(x, p);

    printf("\n");
    return 0;
}

