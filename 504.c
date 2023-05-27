#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char st[99];
	scanf("%s", &st);
	
	int i, check = 1;
	for (i = 0; i < strlen(st)/2; i++) {
//		printf("%c %c\n", st[i], st[strlen(st)-i-1]); 
		if (st[i] != st[strlen(st)-i-1]) {
			check = 0;
			break;
		}
	}
	
	if (check) {
		printf("Yes\n");
	} else {
		printf("No\n");
	} 
} 