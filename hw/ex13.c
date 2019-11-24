/*
 * testqsort.c
 * 배열정렬
 */
#include <stdio.h>
#include <search.h>
#define TABLESIZE 5

int  compare ( const void *ap, const void *bp){
	return (*(int *)ap -*(int *)bp);
	//앞의 변수가 뒤의 변수보다 크면 0보다 큰수, 같으면 0, 작으면
	//0보다 작은 수 반환
}

int main(){
	int table [TABLESIZE] = {4,2,1,5,3};
	int i;
	//compare함수로 두 값을 비교하는방법으로 퀵소트 정렬 실행
	qsort(table, TABLESIZE, sizeof(int), compare);
	for(i=0; i < TABLESIZE; i++)
		printf("%d", table[i]);
	printf("\n");
}
