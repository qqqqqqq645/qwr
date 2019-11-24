//6장 기본 함수
//testrand.c

#include <stdio.h>
#include <stdlib.h>

int main(void){//주사위
int i,x;
double y;
	for(i=0;i<20;i++){
	x=(int)(6*(rand()/(RAND_MAX+1.0))+1);
	//0~1.0사이의 실수 난수에 6을 곱한 후 1을 더해서
	//1~6사이의 정수를 x에 저장
	printf("%d ",x);
	}
	printf("\n");
	return 0;
}
