/*
 * processtime.c
 * 프로세스 시간 측정
 */

#include <stdio.h>
#include <stdlib.h> //exit()
#include <unistd.h>
#include <sys/times.h>

main(){
	double cticks;
	clock_t tcstart, tcend;
	struct tms tmstart, tmend;//tms 구조체 선언
	int i, a = 1, b = 2, c; //a,b,c 연산하는데 사용할 변수

	if((tcstart = times(&tmstart))==-1){//프로세스 시작 시간 저장
		perror("Failed to get start time\n");
		exit(1);
	}

	printf("Fraction of CPU time used is %d\n",tcstart);
	printf("CPU time spent executing process is %d\n",
			tmstart.tms_utime); //사용자의 CPU 수행 시간 출력
	printf("CPU time spent in the system is %d\n",
			tmstart.tms_stime);//시스템의 CPU 수행 시간 출력
	for(i=0;i<10000000;i++)//테스트를 위한 반복연산
		c = a + b;
	if((tcend = times(&tmend)) == -1){ //연산 끝난 시간 저장
		perror("Failed to get end time");
		exit(1);
	}
	printf("\n");
	printf(" Fraction of CPU time used is %d\n", tcend);
	printf("CPU time spent executing process is %d\n",
			tmend.tms_utime);
	printf("CPU time spent in the system is %d\n", tmend.tms_stime);
	cticks = tmend.tms_utime + tmend.tms_stime - tmstart.tms_utime - 
		tmstart.tms_stime;
	//CPU수행시간에 대한 클록틱 = 시작 CPU 수행 시간 - 끝난 CPU 수행 시간
	printf("Total CPU time is %f seconds.\n", cticks/100.);
	//클록틱을 초단위로 변환
	printf("Fraction of CPU time used is %f\n",
			cticks/(tcend - tcstart));
	printf("\n");
}
