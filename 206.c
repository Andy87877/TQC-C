// for迴圈
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b, i, ans = 0;
    scanf("%d %d",&a,&b);
    if (a%2 == 0) a++;

    for (i = a; i <= b; i += 2) {
        ans += i;
    }
    printf("%d\n", ans);
}