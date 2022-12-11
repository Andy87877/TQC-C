// 用函式來判斷 +or*
#include <stdio.h>
#include <stdlib.h>

int compute(int a,int b, int c) { // judge
    if (b == 1) return a+c; // 加法
    if (b == 2) return a*c; // 乘法
    return -1; // none
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); // input
    printf("%d\n", compute(a,b,c)); // output
}