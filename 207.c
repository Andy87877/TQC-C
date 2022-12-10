// 判斷質數
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int check = 0; // bool
    scanf("%d", &n);

    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            check = 1;
            break;
        }
    }

    if (check == 0) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime number", n);
    }
}