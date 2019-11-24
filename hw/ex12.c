/* 정렬된 배열 탐색 함수
 * testbsearch.c
 */
#include <stdio.h>
#include <stdlib.h>
#define TABLESIZE 5

int compare(const void *ap, const void *bp){
	return (*(int *)ap - *(int *)bp);
	//ap 값이 bp값보다 크면 0초과, 같으면 0, 작으면 0미만의 값 반환
}

int main(){
	int table[TABLESIZE] = {1,2,3,4,5};
	//반드시정렬되어야한다
	int n = TABLESIZE, item = 7;
	int * ptr;
	//정렬된 배열을 이진 탐색하여 값이 배열안에 있으면 해당 주소를,
	//없으면 NULL을 반환
	ptr = (int *) bsearch(&item, table, n, sizeof(int), compare);
	if(ptr == NULL)
		printf("%d is not in the table(1-%d).\n",item,n);
	else
		printf("%d is in the table(%d-%d).\n",item,ptr-table+1,n);
	return 0;
}
