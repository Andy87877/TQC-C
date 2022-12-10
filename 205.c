// 用array存一個數字出現幾遍
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[7]; // 1~6 + error
    int i, num;
    for (i = 0; i < 7; i++) a[i] = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num <= 0 || num >= 7) {
            a[0]++;
        } else {
            a[num]++;
        }
    }

    for (i = 1; i < 7; i++) {
        printf("number%d:%d\n", i, a[i]);
    }
    printf("error:%d\n", a[0]);
}