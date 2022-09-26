#include <stdio.h>

int main(){
    int n;
    int fact(int n);
    printf("请输入一个正整数：");
    scanf("%d",&n);
    printf("正整数%d的阶乘是",n);
    printf("%d",fact(n));
    return 0;
}

int fact(int n){
    /**
    * 计算一个正整数的阶乘
    */
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}