// 基礎判斷
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a >= 60) && (a <= 100)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    double ans = (b+1)/10.00;
    printf("%.2f\n",ans);
    if (a >= c) {
        printf("%d",a);
    } else {
        printf("%d",c);
    }
}