// if else
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n < 0 || n >= 91) {
        printf("error\n");
    } else {
        if (n > 60) {
            n += 10;
        } else {
            n += 5;
        }
        printf("%d", n);
    }
}