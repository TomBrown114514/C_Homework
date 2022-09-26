#include <stdio.h>

int main(){
    int x,y,s;
    printf("请输入长方形的长和宽，用空格分隔：\n");
    scanf("%d %d",&x,&y);
    s=x*y;
    printf("这个长方形的面积为：%d",s);
    return 0;
}