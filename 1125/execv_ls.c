//execv 로 ls 시랭

#include <unistd.h>

main(){

	char *const argv[] = {"ls","-l",(char *) 0};
	printf("executing execv.\n");
	
	execv("/bin/ls",argv);
	//execv이 복귀하면 호출실패한것
	perror("execv failed to run ls");
	exit(1);
}
