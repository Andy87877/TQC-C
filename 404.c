// 出現最多次的英文字母
/*
這一題有幾個觀念
1. ASCII
2. array
3. 找到min

找到英文字母出現的次數
只要用array來計次數
用str-97來判斷存哪格
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int arr[26], i;
	for (i = 0; i < 26; i++) { // 所有次數歸零
		arr[i] = 0;
	}
	
	char str[51];
	scanf("%s", &str);
	
	for (i = 0; i < strlen(str); i++) {
		arr[str[i]-97]++; // 該字母的次數+1
	}
	
    // 判斷大小
	int mx = 0;
	char ans = 0;
	
	for (i = 0; i < 26; i++) {
		if (arr[i] > mx) {
			mx = arr[i];
			ans = i;
		}
	}
	
	printf("%c\n", ans+97); // 轉回小寫字母
	printf("%d\n", mx);
}