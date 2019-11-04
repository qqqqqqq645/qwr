/*
 * 4장 디버깅과 오류 처리
 * 파일 이름:dbg_file1.c
 */

#include <stdio.h>

int my_sum(int k){
	int i; 
	int sum=0;

	for(i=1;i<=k;i++)
		sum+=i;

	return sum;
}
