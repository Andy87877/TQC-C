#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, t, num;
    int arr[4], times[4];

    for (i = 0; i < 4; i++) {
        arr[i] = 0;
        times[i] = -1;
    }

    for (t = 0; t < 10; t++) {
        scanf("%d", &num);

        int mn = 11, check = 1;
        for (i = 0; i < 4; i++) {
            if (times[i] == -1) {
                arr[i] = num;
                times[i] = t;
                check = 0;
                break;
                
            }

            if (arr[i] == num) {
                check = 0;
                // times[i] = t;
                break;
            }

            if (mn >= times[i]) {
                mn = times[i];
            }
        }

        if (check) {
            for (i = 0; i < 4; i++) {
                if (mn == times[i]) {
                    arr[i] = num;
                    times[i] = t;
                    break;
                }
            }
        }


        for (i = 0; i < 4; i++) {
            printf("%-2d", arr[i]);
        }
        printf("\n");
        // for (i = 0; i < 4; i++) {
        //     printf("%-2d", times[i]);
        // }
        // printf("\n\n");
    }
}