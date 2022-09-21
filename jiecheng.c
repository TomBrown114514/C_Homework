#include <stdio.h>

int main(){
    int n;
    int fact(int n);
    printf("请输入一个正整数：");
    scanf("%d",&n);
    if(n>0) printf("%d ! = %d",n,fact(n));
    else if(n==0) printf("0!=1");
    else("负数没有阶乘");
    return 0;
}

int fact(int n){
    return n==1?1:n*fact(n-1);
}