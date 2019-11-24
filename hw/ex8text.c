//6장 기본 함수
//testrand.c

#include <stdio.h>
#include <stdlib.h>

int main(void){//주사위
int i,x;
double y;
	for(i=0;i<20;i++){
	//x=(int)((6*(rand()/(RAND_MAX*1.0)))+1); //되는거
	x=(int)((6*(rand()/(RAND_MAX+1.0)))+1); //되는거
	//x=(int)((6*rand()/RAND_MAX*1.0)+1);
	//x=(int)(6*rand()/1);
	printf("%d ",x);
	}
	printf("\n");
	for(i=0;i<80;i++){
		y = (rand()/(RAND_MAX*1.0));
		printf("%f ",y);
	}
	printf("\n");
	return 0;
}
