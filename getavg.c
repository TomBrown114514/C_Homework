#include <stdio.h>
/**
 * 求五个实数的平均值
 * 保留两位小数
*/
int main(){
    float a,avg,s=0;
    printf("请输入5个实数：");
    for(int i = 1; i <= 5; i++){  
        scanf("%f",&a);
        s = s + a;
    }
    avg = s / 5;
    printf("这五个数的平均值avg=%.2f",avg);
    return 0;
}