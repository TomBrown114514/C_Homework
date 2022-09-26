#include <stdio.h>

static int sum=0;

int hlt(char a,char b,char c,int n){
    if (n==1){
        printf("%c>>>>>%c\n",a,c);
        sum++;
    }
    else{
        hlt(a,c,b,n-1);
        printf("%c>>>>>%c\n",a,c);
        sum++;
        hlt(b,a,c,n-1);
    }
}

int main(int argc, char const *argv[])
{
    hlt('a','b','c',3);
    printf("总共移动了%d步",sum);
    return 0;
}
