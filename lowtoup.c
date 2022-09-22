#include <stdio.h>
/**
 * 将小写字母转换成大写字母。
*/
int main(int argc, char const *argv[])
{
    printf("请输入你想转换的字母：");
    char a = getchar(); //获取键盘输入的字母
    if (a >= 'a' && a <= 'z'){
        printf("%c 转换成大写字母的是",a);
        putchar(a-32);
    } else if (a >= 'A' && a <= 'Z'){
        printf("%c 转换成小写字母的是",a);
        putchar(a+32);
    } else printf("请重新输入！！");
    return 0;
}

