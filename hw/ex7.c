/*
 * 6장 기본 함수
 * 파일이름: testmath.c
 * 1부터 10까지의 로그값,루트,지수함수,누승을 계산하여 출력하는프로그램
 */

#include <stdio.h>
#include <math.h>

int main(void) { //산술함수
	double x;
	printf("%10s%10s%10s%15s%20s\n",
		"x","log(x)",",sqrt(x)",",exp(x),","pow(10,0,x)");
		//%10s 출력 자리수 지정
		//
	for(x=1;x<=10;x++){
		printf("%10.5f%10.5f%10.5f%15.5f%20.5f\n",x,
		//%10.5 출력  자리수에서 소수점 자리수 지정하여 출력
		log(x),sqrt(x),exp(x),pow(10.0,x));
	}
}
