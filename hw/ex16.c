/*
 * testmalloc.c
 * 동적메모리 할당
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	int max,i;
	int *ptr;

	printf("배열의 원소 개수는? ");
	scanf("%d", &max);

	//사용자가 입력한 수만큼 메모리 할당
	ptr = (int *) malloc (max * sizeof(int));
	//메모리 할당 실패할 경우
	if(ptr == NULL) {
		printf("메모리를 할당하지 못했습니다.\n");
		exit(-1);
	}
	//생성한 배열에 데이터 추가
	for( i = 0; i < max; i++)
		scanf("%d", &ptr[i]);
	//배열 출력
	printf("입력 숫자 리스트 :");
	for( i = 0; i < max; i++) 
		printf("%d ", *(ptr+i));
	printf("\n");
	//배열 메모리 반환
	free((int *)ptr);
}
