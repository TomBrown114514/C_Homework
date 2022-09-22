#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand((unsigned)(NULL));
    int x=rand()%100,a;
    printf("请输入你要猜的数：");
    scanf("%d",&a);
    if(a>100 || a<0) printf("你输入的数已经超过范围啦！");
    else{
        if(a==x) printf("你猜对啦！");
        else if(a>x) printf("你猜大了！");
        else if(a<x) printf("你猜小啦");
        else printf("你猜对啦！");
    }
    return 0;
}
