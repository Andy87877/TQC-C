#include <stdio.h>
#include <stdlib.h>

int main(){
	long long int base = 0;
	int arr[10], i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	} 
	
	for(i = 0; i < 10; i++) {
		switch (arr[i]) {
			case 0:
				break;
			case 1:
				base = base << 1;
				base += 1;
				break;
			case 2:
				base = base << 2;
				base += 2;
				break;
			case 3:
				base = base << 3;
				base += 4;
				break;
			case 4:
				base = base << 4;
				base += 8;
				break;
			default:
				break;
		} 
	}
	base = base >> 3; 
	int point = 0;
	while (base != 0) {
		if (base & 1) {
			point++;
		} 
		base = base >> 1;
	} 
	
	printf("score = %d\n", point);
} 