// 大小寫轉換
/*
轉換大小寫有兩種方法
第一種就直接用ASCII的性質
-32變大寫 +32變小寫
第二種可以用內建函式
toupper變大寫
tolower變小寫 

判斷大小寫也與ASCII的觀念一樣
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // 小轉大
            // 也可用toupper()
            str[i] = str[i] - 32;
        } else { // 大轉小
            // 也可用tolower()
            str[i] = str[i] + 32;
        }
    }

    printf("%s\n", str);
}