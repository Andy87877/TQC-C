// 判斷奇數偶數
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n%2 == 0) {
        printf("even\n");
    } else {
        printf("odd\n");
    }
}