#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    int a = (i++)+(++i);
    printf("%d",a);
    return 0;
}
