#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

int main() {
	int n, line = 0;
	scanf("%d", &n);
	FILE * read = fopen("read.txt", "r");
	FILE * write = fopen("write.txt", "w");
	char buf[100];
	
	while (fgets(buf, 100, read) != NULL) {
		int i, len = strlen(buf);
		line++;
		if (isalpha(buf[0])) buf[0] = toupper(buf[0]);
		for (i = 1; i < len; i++) {
			if (buf[i-1] == ' ' && isalpha(buf[i])) {
				buf[i] = toupper(buf[i]);
			}
		}
		printf("%s", buf);
		fputs(buf, write);
		if (line == n) break;
	}
	
	fclose(read);
	fclose(write);
}