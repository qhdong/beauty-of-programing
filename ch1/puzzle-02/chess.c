#include <stdio.h>

struct {
    unsigned char a:4;
    unsigned char b:4;
} i;

void method1() {
    for (i.a = 1; i.a <= 9; i.a++) {
        for (i.b = 1; i.b <= 9; i.b++) {
            if (i.a % 3 != i.b % 3) {
                printf("A = %d, B = %d\n", i.a, i.b);
            }
        }
    }
}

void method2() {
    int i = 9 * 9;
    while (i--) {
        if (i / 9 % 3 != i % 9 % 3) {
            printf("A = %d, B = %d\n", i / 9 + 1, i % 9 + 1);
        }
    }
}

int main(int argc, char const *argv[]) {
    printf("======================= Method 1 ======================\n");
    method1();
    printf("======================= Method 2 ======================\n");
    method2();
    return 0;
}
