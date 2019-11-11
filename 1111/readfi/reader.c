#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#define BUFSIZE 512

main(){
	
	char buffer[BUFSIZE];
	int filedes;
	ssize_t nread;
	long total = 0;
	
	filedes = open("anotherfile",O_RDONLY);

	while(nread = read(filedes,buffer,BUFSIZE)>0)
		total +=nread;
	printf("total chars in anotherfile: %d\n",total);
	exit(0);
}
