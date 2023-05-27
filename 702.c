#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int ans = 0, i;
	char a[100];
	scanf("%s1", &a);
	
	for (i = 0; i < strlen(a); i++){
		if (a[i] == '1') {
			ans += pow(2,strlen(a)-i-1);
		} 
	}
	printf("%d\n", ans);
} 