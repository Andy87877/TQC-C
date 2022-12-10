// 圓面積
#include <stdio.h>
int main() {
    int R;
    scanf("%d",&R);
    printf("%-10d\n",R);
    double r = R/2.0;
    printf("%-10.2f\n",r);
    printf("%-10.4f\n",r*r*3.1415);
}