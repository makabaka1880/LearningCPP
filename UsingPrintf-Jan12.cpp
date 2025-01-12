#include <cstdio>

int main() {
    int i = 1;
    long l = 15342;
    float f = 2.1;
    double lf = 3.0012;
    char a = 't';
    printf("Hello World!\ni = %d, l = %ld, f = %.2f, lf = %lf, a = %c\n", i, l, f, lf, a);
    printf("Escaping sequence: \\\\n outputs \\n");
    return 0;
}