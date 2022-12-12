// 字串長度與合併
/*
字串長度為 strlen(該字串)
合併字串為 strcat(字串1,字串2)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 字串的函式庫

int main() {
	char str1[10], str2[10]; // 相當於c++的string
	scanf("%s %s", str1, str2); // 輸入
	printf("%d\n", strlen(str1)); // 長度
	printf("%d\n", strlen(str2)); // 長度
	printf("%s\n", strcat(str1, str2)); // 合併
}