#include <stdio.h>
/**
 * 将小写字母转换成大写字母。
*/
int main(int argc, char const *argv[])
{
    char a;
    printf("请输入你想转换的小写字母：");
    scanf("%c",&a);
    printf("%c 转换成大写字母的是 %c",a,a-32);
    return 0;
}
