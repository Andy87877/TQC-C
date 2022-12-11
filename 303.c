// 判斷質數
/*
從 2除到(n的根號)
如果該數字都不整除
那就是質數了
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compute(int n) {
    int i, check = 1; // 除以幾 和 是否可以整除(bool)
    for (i = 2; i <= pow(n,0.5); i++) {
        if (n%i == 0){
            check = 0;
            break;
        }
    }
    return check;
}

int main() {
    int n, check;
    scanf("%d", &n);
    check = compute(n);
    if (check) {
        printf("%d is a prime number", n);
    } else {
        printf("%d is not a prime number", n);
    }
}