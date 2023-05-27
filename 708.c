#include <stdio.h>
#include <stdlib.h>

struct time{
	int hr, min;
}; 

int compute(struct time t[]);

int main() {
	struct time t[3];
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%d %d", &t[i].hr, &t[i].min);
	}
	printf("%d\n", compute(t));
}

int compute(struct time t[]) {
	int ans = 0;
	int i;
	
	for (i = 0; i < 3; i++) {
		if (t[i].hr == 0) {
			printf("AM 12:%d\n", t[i].min);
			ans++;
		} else if (t[i].hr < 12) {
			printf("AM %d:%d\n", t[i].hr, t[i].min);
			ans++;
		} else if (t[i].hr == 12) {
			printf("PM 12:%d\n", t[i].min);
		} else {
			printf("PM %d:%d\n", t[i].hr-12, t[i].min);
		}
	}
	return ans;
}
