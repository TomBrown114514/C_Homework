#include <stdio.h>
#define a 10
int main(){
    float t;
    printf("请输入自由落体运动的时间:");
    scanf("%f",&t);
    float x = 1/2.0 * a * t * t;
    printf("%d秒内物体下降的垂直距离为%.2f米",(int)t,x);
    return 0;
}