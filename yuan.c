#include <stdio.h>
#define Pi 3.14

int main(){
    /*计算圆的面积和周长*/
    float r,s,c;
    printf("请输入圆的半径:");
    scanf("%f",&r);
    s=Pi*r*r;
    c=2*Pi*r;
    printf("圆的面积是%.2f，周长是%.2f",s,c);
    return 0;
}