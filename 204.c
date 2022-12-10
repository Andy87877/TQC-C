// +-*運算
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    char c;
    scanf("%d", &a);
    scanf("%d ", &b);
    scanf("%c", &c);

    if (c == '+') {
        printf("%d+%d=%d",a,b,a+b);
    } else if (c == '-') {
        printf("%d-%d=%d",a,b,a-b);
    } else if (c == '*') {
        printf("%d*%d=%d",a,b,a*b);
    } else {
        printf("error\n");
    }
}