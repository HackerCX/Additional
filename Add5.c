#include <stddef.h>

char *strncpy(char *dest, const char *src, size_t n) {
    size_t i = 0;
    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}


int main() {
    char src[] = "hello";
    char dest[10];

    strncpy(dest, src, 10);
    printf("%s\n", dest);

    return 0;
}


