#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b, i; 
	char verify, id[6];
	
	for (i = 0; i < 3; i++) {
		scanf("%s", id);
		
		a = id[0]+id[2]+id[4] - 48*3;
		b = (id[1]+id[3] - 48*2)*5;
		verify = (a+b)%26;
		
		if (verify == id[5]-64) {
			printf("Pass\n");
		} else {
			printf("Fail\n");
		}
	}
}