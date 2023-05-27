#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	scanf("%d", &num);
	int a[10], i, j, ans = 1;
	if (num == 0) {
		printf("0=0\n");
	} else {
		while (num > 0) {
			ans *= num%10;
			a[i++] = num%10;
			num /= 10;
		}
		
		for (j = i-1; j >= 1; j--) {
			printf("%d", a[j]);
			printf("*");
		}	
		printf("%d=%d", a[0], ans);
	}
} 