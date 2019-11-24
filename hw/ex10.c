/*
 * 6장 기본 함수
 * testmin.c
 */
#include <stdio.h>
#include <string.h>

main(){
	char s[20],t[20], min[20];
	//두 문자열을 입력받아 각각 s,t,에 저장
	printf("char 1 ? ");
	scanf("%s",s);

	printf("char 2 ? ");
	scanf("%s",t);
	
	//strcmp함수로 두 문자열을 비교
	//같으면 0 반환, 앞 문자열이 뒤 문자열보다 짧으면 0보다 작은 수 반환,
	//반대의 경우 0보다 큰 수 반환하므로 짧은 문자열을 min에 저장
	if(strcmp(s,t)<0)
		strcpy(min,s);
	else
		strcpy(min,t);
	printf("%s\n",min);
}
