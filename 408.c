#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[20], str2[20], str3[40];
	scanf("%s", &str1);
	scanf("%s", &str2);
	if (strlen(str1) <= 3 || strlen(str1) <= 3) {
		printf("error\n");
	} else {
		strcpy(str3,str1);
		strcat(str3,str2);
		printf("%d\n", strlen(str1));
		printf("%d\n", strlen(str2));
		int i = strlen(str3)-1;
		for (i; i >= 0; i--) {
			printf("%c", str3[i]);
		}
	}
}