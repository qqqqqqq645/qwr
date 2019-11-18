//file_size.c
//파일의 크기를 알아내는 프로그램
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

main(int argc, char *argv[]){
	int fd; //file decriptor
	off_t size;

	if(argc < 2){
		fprintf(stderr, "Usage:file_size filename\n");
		exit(1);
	}
	fd = open(argv[1], O_RDONLY);
	size = lseek(fd,0,SEEK_END);
	printf("%s\ 's size = %d\n",argv[1],size);
	close(fd);
}
