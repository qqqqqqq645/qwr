/*
 * testrealloc.c
 * 메모리 재할당 함수 예제
 */

#include <stdio.h>
#include <stdlib.h>

main(){
	char c, *ptr;
	int count;
	ptr = NULL; //ptr 초기값은 NULL

	count = 0;
	while((c=getchar()) != '\n'){
			if(count == 0)//맨처음 ptr에char 하나짜리 크기의   메모리 할당
				ptr = (char *)malloc(1);
			else
				ptr = (char *) realloc(ptr, count+1);//메모리 재할당
			*(ptr+count)=c;
			count++;
	}
	*(ptr+count)='\0'; //ptr의 마지막 주소에 \0값을 넣어 문자열의 끝 표시

	printf("입력문자열 : %s 총 할당메모리 :%d\n",ptr,count);
	free(ptr);
}
