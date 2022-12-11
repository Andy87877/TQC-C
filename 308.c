// 費氏數列
/*
0 1 1 2 3 5 8..........
f(0) = 0;
f(1) = 1;
f(2) = f(0)+f(1);
f(3) = f(1)+f(2);
f(n) = f(n-2)+f(n-1); (n >= 2)
*/
#include <stdio.h>
#include <stdlib.h>

int compute(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return compute(n-1)+compute(n-2);
}

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        printf("fib(%d)=%d\n", i, compute(i));
    }
}