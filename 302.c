// 判斷成績
#include <stdio.h>
#include <stdlib.h>

int compute(int n) { // 判斷函式
    if (n > 100 || n < 0) return -1;
    if (n >= 60) return n+5;
    return n+10;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", compute(n));
}