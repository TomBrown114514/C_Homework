#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 2, y = 8;
    x+=y-=4;
    printf("%d,%d",x,y);
    return 0;
}
