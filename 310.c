// 阿姆斯壯數
/*
1. 找到幾位數
2. 把每個數字單獨提取
3. 加上該數的幾次方
4. 如果全部加完等於該數的話
5. 就輸出該數字
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compute(int);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", compute(n));
}

int compute(int n) {
    int ans = 0; // 要加總的數字
    int i; // 判斷的數字
    for (i = 1; i < n; i++) { // 開始判斷
        // printf("%d ", i);
        int times = 1; // 會有幾次方
        int now = i; // 當前要判斷的數字
        while (now >= 10) { // 算有幾次方
            now /= 10; // 減少一位
            times++; // +1
        } 
        // printf("%d ", times);

        int judge = 0; // 要加的數字
        now = i; // 歸回當前要判斷的數字
        while (now >= 1) {
            // 加當前最後一位數字的次方
            // +0.5是怕有浮點數
            judge += (pow(now%10, times)+0.5);
            now /= 10; // 減少一位
        }
        // printf("%d ", judge);

        now = i; // 歸回當前要判斷的數字
        if (now == judge) { // 為阿姆斯壯數
            printf("%d\n", now); // 輸出
            ans += now; // 加總
        }     
        // printf("\n");
    }
    return ans; // 加總後的數字
}