/*
 * 8장 파일 처리
 * file_create2.c
 */

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

main(int argc, char *argv[]){
	
	int fd;
	char *buf = "This is a test.";
	ssize_t cnt; //write count
	int flags = O_WRONLY |O_CREAT |O_TRUNC;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;//0644
	fd = open(argv[1],flags, mode);
	//printf("%d\n",fd);
	cnt = write(fd, buf, strlen(buf));
	printf("write count = %d\n",cnt);
	close(fd); 
}
