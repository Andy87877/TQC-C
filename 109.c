// 奇偶判斷
#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a >= 101) {
        printf("error\n");
    } else {
        if (a >= 60) {
            printf("pass\n");
        } else {
            printf("fail\n");
        }
        if (a%2) {
            printf("odd\n");
        } else {
            printf("even\n");
        }
    }
}