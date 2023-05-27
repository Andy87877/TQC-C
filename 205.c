// 一個數字出現幾次
/*
這題要用array來存次數
首先要先歸零
如果該數字符合題目要的
那就把該數字的array +1
就可以得到數字出現幾次了
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[7]; // 1~6 + error
    int i, num;
    
    for (i = 0; i < 7; i++) { // 歸零
        a[i] = 0;
    }

    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num <= 0 || num >= 7) {
            a[0]++; // error +1
        } else {
            a[num]++;
        }
    }

    for (i = 1; i < 7; i++) {
        printf("number%d:%d\n", i, a[i]);
    }
    printf("error:%d\n", a[0]);
}