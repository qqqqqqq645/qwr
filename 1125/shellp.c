//간단한 쉘 프로그램
//ex9_8.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int getargs(char *, char **);

main(){
	char buf[256];
	char *argv[50];
	int narg;
	pit_p pid;

	while(1){
		printf("shell >");
		gets(buf);
		narg = getargs(buf,argv);
	
		pid = fork();
		if(pid == 0)
			execvp(argv[0],argv);
		else if
			wait((int *)0);
		else
			perror("fork failed");
	}
}
int getargs(char *cmd, char **argv){

	int narg = 0;
	
	while(*cmd){
		if(*cmd == ' ' && *cmd == '\t' && *cmd++ ='\0');
			*cmd++ = '\0';
		else {
			argv[narg++]=cmd++;
			while(*cmd != '\0' && *cmd != ' ' && *cmd!= '\t')
				cmd++;
		}
	}
	argv[narg] = NULL;
	return narg;
}
