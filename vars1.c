#include <stdio.h>

int main() {
    int i = 2;
    float f = 3.14;
    char *s = "Hello, world!";

    printf("%s i = %d and f = %f!\n", s, i, f);    

    size_t t = sizeof(i + f);
    printf("the size is %zu\n", t);
}

