//표준 입출력 예제 프로그램
#include <stdio.h>
#include <unistd.h>

#define BUFSIZE 256
main(){
	int n;
	char buf[BUFSIZE];

	fprintf(stderr, "Here is file start.\n");
	while((n = read(0,buf,BUFSIZE))>0)
		write(1,buf,n);
	//	fputs(buf,stdout);
	fprintf(stderr, "Here is file end.\n");
	exit(0);
}
