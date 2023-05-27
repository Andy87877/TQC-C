#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compute(int n) {
	int i;
	for (i = 2; i < sqrt(n); i++) {
		if (n%i) return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	if (compute(n)) {
		printf("-1\n");
	} else {
		int i;
		for (i = 2; i <= n; i++) {
			while (n != i) {
				if (n%i == 0) {
					printf("%d*", i);
					n /= i;
				} else {
					break;
				}
			}
		}
		printf("%d\n", n);
	}
} 