// 陣列裡有多少三的倍數
#include <stdio.h>
#include <stdlib.h>

int compute(int a[]) {
    int check = 0, i;
    for (i = 0; i < 6; i++) {
        if (a[i]%3 == 0) check++;
    }
    return check;
}

int main() {
    int a[6], i;
    for (i = 0; i < 6; i++) { //input
        scanf("%d", &a[i]); 
    }
    printf("%d\n", compute(a));
}