// 字串比對
/*
比大小的原理
是用ASCII碼的大小排的
例如: 
大寫 A為65 B為66 .... Z為90
小寫 a為97 b為98 .... z為122
藉由strncmp函式來進行比較
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
	char str1[129], str2[129];
	int n; // 到第幾格
	gets(str1); // 輸入(可以讀取空格)
	gets(str2);
	scanf("%d", &n);
	
	if (n > strlen(str1)) {
		printf("error\n");
	} else {
		int a;
		a = strncmp(str1, str2, n);
		if (a > 0) {
			printf("%s > %s\n", str1, str2);
		} else if (a == 0) {
			printf("%s = %s\n", str1, str2);
		} else {
			printf("%s < %s\n", str1, str2);
		}
	}
}