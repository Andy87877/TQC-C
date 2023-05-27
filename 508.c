#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	char a[9], b[9];
	int A = 0, B = 0;
	scanf("%s", &a);
	scanf("%s", &b);
	
	int i;
	for (i = 0; i < 8; i++) {
		if (a[i] == '1') {
			A += pow(2, 7-i);
		}
		if (b[i] == '1') {
			B += pow(2, 7-i);
		}
	}
	int total = A+B;
	printf("%d + %d = %d\n", A,B, total);
	
	char ans[0];
	for (i = 0; i < 8; i++) {
		if (total >= pow(2, 7-i)) {
			total -= pow(2, 7-i);
			ans[i] = '1';
		} else {
			ans[i] = '0';
		}
	}
	
	printf("%s\n", ans);
	
}