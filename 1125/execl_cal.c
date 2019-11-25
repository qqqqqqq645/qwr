//ex9_5.c
//execl로 ls 실행

#include <unistd.h>

main(){
	printf("Executing execl.\n");
	execl("/bin/cal","cal","11","2019",(char *)0);
	//execl 복귀하면 호출 실패
	perror("execl failed to run ls");
	exit(1);
}
