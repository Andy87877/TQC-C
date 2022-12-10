// 五五乘法表
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    if (n == 0) {
        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= 5; j++) {
                printf("%d x %d = %d\t",i,j,i*j);
            }
            printf("\n");
        }
    } else if (n == 1) {
        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= 5; j++) {
                printf("%d x %d = %d\t",j,i,i*j);
            }
            printf("\n");
        }
    } else {
        printf("error\n");
    }
}