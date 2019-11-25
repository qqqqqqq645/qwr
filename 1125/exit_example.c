//exit example
//ex9_2.c

#include <stdlib.h>
#include <stdio.h>

main(){
	int exit_status;
	
	printf("enter exit status :");
	scanf("%d",&exit_status);

	exit(exit_status); //echo $? 명령으로 종료 상태 확인
}
