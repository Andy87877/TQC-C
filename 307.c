// 找陣列的最大值
#include <stdio.h>
#include <stdlib.h>

int compute(int a[]) {
    int max = a[0], i; //最大值
    for (i = 1; i < 5; i++) {
        // 如果該值大於當前的最大值 
        // 那就把最大值替換掉
        if (a[i] > max) max = a[i];
    }
    return max;
}
int main() {
    int a[5], i;
    for (i = 0; i < 5; i++) { // input
        scanf("%d", &a[i]);
    }
    printf("%d\n",compute(a));
}