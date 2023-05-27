#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[9], i, j, index, temp, sum = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < 9; i++) {
		index = i;
		for (j = i+1; j < 9; j++) {
			if (arr[index] > arr[j]) index = j;
		}
		
		temp = arr[index];
		arr[index] = arr[i];
		arr[i] = temp;
		
		printf("%d\n", arr[i]);
		sum += arr[i];
	}
	
	printf("sum = %d", sum);
} 
