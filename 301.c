// 印出長方形
#include <stdio.h>
#include <stdlib.h>

void compute(int n, int m) { // 函式
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n"); // 換行
    }
    printf("%d\n", n*m);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    compute(n,m);
}