/*
 * 4장 디버깅과 오류 처리
 * 파일 이름 : dbg_watch.c
 */
#include<stdio.h>
main(){
	int i; 
	int sum=0;
	
	for(i=0;i<3;i++)
		sum+=i;
	
	printf("sum=%d\n",sum);
}
