#include <stdio.h>

char *strncat(char *dest, const char *src, unsigned int n) {
    unsigned int i = 0;
    unsigned int dest_len = 0;

    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    while (i < n && src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return dest;
}

int main() {
    char dest[20] = "Hello";
    char src[] = "World";

    strncat(dest, src, 3);

    printf("%s\n", dest);

    return 0;
}

