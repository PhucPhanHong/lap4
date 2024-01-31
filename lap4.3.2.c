#include <stdio.h>
void T(int *p, int *q) {
    int t = *p;
    *p = *q;
    *q = t;
}
int main() {
    int a = 7, b = 6;
    printf("Before swap: a = %d, b = %d\n", a, b);
    T(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

