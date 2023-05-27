#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[15], b[15], c[15], n, i, j;
	scanf("%d", &n);
	
	for (i = 0; i < 15; i++) {
		b[i] = 0;
		c[i] = 0;
	}
	
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		for (j = 0; j < n; j++) {
			if (b[j] == a[i] || b[j] == 0) {
				b[j] = a[i];
				c[j]++;
				break;
			}
		}
	}
	
	int check = 1;
	for (i = 0; i < n;i++) {
		if (c[i] > n/2) {
			printf("%d\n", b[i]);
			check = 0;
		}
	}
	if (check) printf("error\n");
}