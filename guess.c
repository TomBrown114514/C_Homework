#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mynumber = 38;
    int yournumber;
    printf("请输入您猜的数字:");
    scanf("%d",&yournumber);
    if (yournumber==mynumber)
    {
        printf("您猜中了！");
    }
    else if (yournumber>mynumber)
    {   
        printf("您猜的数大了！");
    }
    else
    {
        printf("您猜的数小了！");
    }
    
    return 0;
}
