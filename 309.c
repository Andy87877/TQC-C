// 找出最小的分數值
/*
找到 a1/a4 a2/a5 a3/a6
的最小值
要注意所有數字都要是浮點數
不然都會除完後會自動變成整數
*/
#include <stdio.h>
#include <stdlib.h>

float compute(float a[]) {
    float min = a[0]/a[3];
    int i;
    for (i = 1; i < 3; i++) {
        if (min > a[i]/a[i+3]) {
            min = a[i]/a[i+3];
        }
    }
    return min;
}

int main() {
    float a[6];
    int i; 
    for (i=0; i<6; i++) { // input
        scanf("%f", &a[i]);
    }
    printf("%.3f", compute(a));
}