// 算距離
#include <stdio.h>
#include <math.h>
int main() {
    int x1,x2,y1,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    printf("%.2f",sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
}