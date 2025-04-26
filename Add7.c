#include <stdio.h>

char *strstr(const char *haystack, const char *needle) {
    if (*needle == '\0') return (char *)haystack;

    for (const char *h = haystack; *h != '\0'; h++) {
        const char *h_ptr = h;
        const char *n_ptr = needle;

        while (*h_ptr == *n_ptr && *n_ptr != '\0') {
            h_ptr++;
            n_ptr++;
        }

        if (*n_ptr == '\0') {
            return (char *)h;
        }
    }

    return NULL;
}

int main() {
    const char *text = "HelloWorld";
    const char *pattern = "World";

    char *found = strstr(text, pattern);

    if (found != NULL)
        printf("%s\n", found);
    else
        printf("Not found\n");

    return 0;
}

