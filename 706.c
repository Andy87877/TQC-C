#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *read = fopen("read.txt", "r");
    FILE *write = fopen("write.txt", "w");

    int num, i = 0, times = 0;
    int arr[10];
    while (fscanf(read, "%d", &num) != EOF) {
        arr[times] = num;
        times++;
    }

    for (i = times; i < times+4; i++) {
        scanf("%d", &arr[i]);
    }

    int j, tmp;
    times += 4;
    for (i = 0; i < times; i++) {
        for (j = 0; j < times; j++) {
            if (arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    if (read) {
        for (i = 0; i < times; i++) {
            printf("%d\n", arr[i]);
            fprintf(write, "%d\n", arr[i]);
        }
    }
}