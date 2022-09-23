#include <stdio.h>
/**
 * 求五个实数的平均值
 * 保留两位小数
*/
int main(){
    float socer,avg;
    int i;
    for(i=1;i<=3;i++){
        printf("请输入第%d位同学的C语言成绩:",i);
        scanf("%f",&socer);
        avg=avg+socer;
    }
    avg=avg/3;
    printf("这三位C语言的平均成绩是:%.2f",avg);
    return 0;
}