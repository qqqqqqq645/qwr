/*
 * testsleep.c
 * sleep() 테스트 예제
 */

#include <stdio.h>
#include <time.h>

main() {
	time_t tstart ,tend;
	double diff;

	time(&tstart);//프로세스 시작 시간 저장
	sleep(3);//3초 실행 중지
	time(&tend);//sleep()실행후 시간 저장
	diff = difftime(tend,tstart);//두 차이계산
	printf("sleep time is %lf.\n",diff);
}
