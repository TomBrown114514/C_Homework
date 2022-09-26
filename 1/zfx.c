#include <stdio.h>

int main(){
	int i,j;
	for(i=1;i<=8;i++){
		if(i==1||i==8) printf("*************\n");
		else printf("*           *\n");
	}
	return 0;
}