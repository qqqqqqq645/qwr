//6장 기본 함수
//testrand.c

#include <stdio.h>
#include <stdlib.h>

int main(void){//주사위
int i,x;
	for(i=0;i<20;i++){
	x=(int)(6*rand()/(RAND_MAX+1.0)+1);
	printf("%d ",x);
	}
}
