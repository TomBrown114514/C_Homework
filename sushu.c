#include <stdio.h>
#include <math.h>

void main(){
    int i,m;
    printf("请输入一个数：");
    scanf("%d",&m);
    for(i=2;i<m;i++){
        if(m%i==0) break;
    }
    printf("该数%s一个素数",(i>=m&&m!=1)?"是":"不是");
}