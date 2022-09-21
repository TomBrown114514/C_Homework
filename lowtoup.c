#include <stdio.h>
/**
 * 将小写字母转换成大写字母。
*/
int main(int argc, char const *argv[])
{
    printf("请输入你想转换的小写字母：");
    char a = getchar(); //获取键盘输入的字母
    printf("%c 转换成大写字母的是",a);
    putchar(a-32);
    return 0;
}
