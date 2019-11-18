//파일 크기 변경 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

const char *endString = ".";

main(int argc, char *argv[]){
	int fd; //file descriptor
	off_t hole_size;
	off_t size;
	
	fd = open(argv[2], O_RDWR);
	hole_size = atoi(argv[1]);
	size = lseek(fd,0,SEEK_END);
	//printf("Before : %s \ 's size = %d\n",argv[1],size);
	printf("Before : %s \ 's size = %d\n",argv[2],size);
	lseek(fd,hole_size,SEEK_END);
	//write(fd,endString,1);//오프셋이 파일 크기를 초과하는 경우i
	fputs(endString,fd);
	size = lseek(fd,0,SEEK_END);
	printf("After :%s \'s size = %d\n",argv[2],size);
	close(fd);
}
