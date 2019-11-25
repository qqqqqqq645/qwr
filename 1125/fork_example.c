// ex9_1.c
// fork example
//
#include<sys/types.h>
#include <unistd.h>
#include <stdio.h>
main(){

	pid_t pid;//부모에서 프로세스 식별버놓 저장
	printf("Calling fork \n");
	pid = fork();

	if(pid == 0)
		printf("I'm the child process\n");
	else if( pid >0)
		printf("I'm the parent process\n");
	else
		printf("fork failed\n");

	printf("PID = %d\n",getpid());
	printf("val PID =  %d\n,pid");
}
