#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

#define PERMS 0644 //O_CREATE 를 사용하는 open을 위한 허가
char *workfile = "junk";

main(){
	int filedes;
	
	if((filedes = open(workfile, O_RDWR | O_CREAT,PERMS))==-1){
	
		printf("Couldn't open %s\n",workfile);
		exit(1);
	}
	exit(0);
	
}
