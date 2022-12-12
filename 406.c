// 字元移位
/*
這一題要用到建表的概念
只要當該字元出現時
就把該字元換成下個位置的字元
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i, j;
    // 建表
	char sma[] = "qwertyuioppasdfghjkllzxcvbnmm";
	char big[] = "QWERTYUIOPPASDFGHJKLLZXCVBNMM";
	
	char str1[51] = {}, str2[51] = {};
	scanf("%s", str1);
	
	for (i = 0; i < strlen(str1); i++) {
		if (str1[i] >= 'a' && str1[i] <= 'z') { //小寫
			for (j = 0; j < strlen(sma); j++) {
				if (str1[i] == sma[j]) {
					str2[i] = sma[j+1]; // 下一格
					break;
				}
			}
		} else if (str1[i] >= 'A' && str1[i] <= 'Z') { //大寫
			for (j = 0; j < strlen(big); j++) {
				if (str1[i] == big[j]) {
					str2[i] = big[j+1]; // 下一格
					break;
				}
			}
		}
	}
	
	printf("%s\n", str2);
}