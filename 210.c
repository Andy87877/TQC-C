// 最大公因數和最小公倍數
/*
ex
    12 18
/2   6  9
/3   2  3

最大公因數 = 2*3
最小公倍數 = 2*3*最大公因數
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    int now = 2; //當前要除以幾
    int ans = 1; // 最大公因數
    scanf("%d %d",&a,&b);
    while (a >= now && b >= now) { //還可以判斷
        if ((a%now == 0) && (b%now == 0)) {
            a /= now;
            b /= now;
            ans *= now;
        } else {
            now++;
        }
    }
    printf("%d\n", ans);
    printf("%d\n", ans*a*b);
}
