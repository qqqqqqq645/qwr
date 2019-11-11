#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include <errno.h>
#include <string.h>
#define MAX_READ 10
main(int argc, char *argv[]){
	int dst_fd;
	int src_fd ;
	int tot_cnt=0;
	char buf[MAX_READ];
	ssize_t rcnt;
	int flags = O_WRONLY | O_CREAT | O_APPEND;
	mode_t mode =S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH; //0644

	src_fd = open(argv[1],O_RDONLY);
	dst_fd = creat(argv[2],mode);
	
	while(rcnt = read(src_fd,buf,MAX_READ)>0)
		tot_cnt += write(dst_fd,buf,rcnt);	
	

	printf("total write count = %d\n",tot_cnt);
	close(src_fd);
	close(dst_fd);

}
