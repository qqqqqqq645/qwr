//자식 프로세스를 3개 생성하여 각 자식 프로게스에서 자신의 pid값을 출력하고 종료하도록

#include <stdlib.h>
#include <unistd.h>

main(){
	pid_t pid;
	int i=0;
	while(i<3){	
		pid = fork();
		if(pid == 0){
			printf("PID = %d\n",getpid());
			exit(0);//자식프로세스 일끝나고 사망
		}
		i++;//부모프로세스는 다음루프실행
	}
	printf("%d\n",pid);
	printf("%d\n",getpid());
	exit(0);
}
