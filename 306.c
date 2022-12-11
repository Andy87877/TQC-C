// 階乘(遞迴)
/*
n! = f(n)
if n == 0 return 1
if n >= 1 return n*f(n-1)
例如
3! = 3*2*1 = 3*2!
4! = 4*3*2*1 = 4*3!
*/
#include <stdio.h>
#include <stdlib.h>

int compute(int n) {
    if (n == 0) return 1;
    return n*compute(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d!=%d", n, compute(n));
}