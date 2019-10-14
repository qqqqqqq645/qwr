//1~100 합계 출력하는 프로그램
#include <stdio.h>
#define VALUE 100

void main(){
	int k,sum=0;
	for(k=1;k<VALUE;k++){
		sum+=k;
	}
	printf("sum-%d\n",sum);
}
