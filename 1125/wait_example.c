//ex9_4.c
////wait example

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
main(){
	pid_t pid;
	int status, exit_status;

	if((pid = fork()) < 0)
		perror("fork failed");
	if(pid == 0) {
		sleep(4);//수행을 4초 동안 중단
		printf("pid = %d\n",getpid());
		exit(5);
	}

	if((pid = wait(&status))==-1){
		perror("wait failed");
		exit(2);
	}
	if(WIFEXITED(status)){
		exit_status = WEXITSTATUS(status);
		printf("pid = %d\n",getpid());
		printf("Exit status from %d was %d\n",
			pid,exit_status);
	}
	exit(0);
}
