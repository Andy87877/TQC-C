#include <stdio.h>
#include <stdlib.h>

int main() {
	int a1,b1,a2,b2, i, j, k;
	
	scanf("%d %d", &a1, &b1);
	int A[a1][b1];
	for (i = 0; i < a1; i++) {
		for (j = 0; j < b1; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	scanf("%d %d", &a2, &b2);
	int B[a2][b2];
	for (i = 0; i < a2; i++) {
		for (j = 0; j < b2; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	
	if (a2 != b1) {
		printf("error\n");
		return 0;
	}
	
	
	int ans[a1][b2];
	for (i = 0; i < a1; i++) {
		for (j = 0; j < b2; j++) {
			int tmp = 0;
			for (k = 0; k < a2; k++) {
				tmp += A[i][k] * B[k][j]; 
			}
			ans[i][j] = tmp;
		}
	}
	
	for (i = 0; i < a1; i++) {
		for (j = 0; j < b2-1; j++) {
			printf("%d ", ans[i][j]);
		}
		printf("%d\n", ans[i][b2-1]);
	}
} 