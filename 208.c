// 判斷不只一個的質數
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j,  n;
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        int check = 0;
        for (j = 2; j < i; j++) {
            if (i%j == 0) {
                check = 1;
                break;
            }
        }

        if (check == 0) {
            printf("%d ", i);
        }
    }
}