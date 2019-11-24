/*
 * testmem.c
 * 메모리 처리 함수 예제
 */

#include <stdio.h>
#include <string.h>

main(){
	char srcstr[] = "This is a test string.";//원본 문자열
	char dststr [25], *ptr; //대상 문자열과 char형 포인터 ptr 선언
	int ret;
	memcpy(dststr, srcstr, strlen(srcstr)+1);
	//srcstr의 메모리 영역을 srcstr의 길이 + '\0' 만큼 복사하여 
	//dststr의 값으로 설정
	printf("dststr is \"%s\"\n", dststr);

	memset(srcstr +5, 'a', 5);
	//srcstr 주소의 5번째 위치에 5바이트만큼 'a'로 초기화
	printf("srcstr is \"%s\"\n",srcstr);
	ret = memcmp(srcstr, dststr, strlen(srcstr));
	//srcstr, dststr 의 메모리 영역을 srcstr의 길이만큼 한 바이트씩 비교
	//앞의 인자가 뒤의 인자보다 크면 0보다 큰값, 같으면 0 작으면 0미만의 수 반환
	if(ret > 0)
		printf("srcstr is greater than dststr.\n");
	else if(ret == 0)
		printf("srcstr is equal to dststr.\n");
	else
		printf("srcstr is less than dststr.\n");
	
	ptr = memchr(dststr, ' ',strlen(dststr));
	//dststr에서  ' '문자가 처음으로 나타나는 위치 주소 반환
	if(ptr != NULL)
		printf("First space was at position %d.\n",ptr-dststr+1);
	else
		printf("Space was not found.\n");
}
