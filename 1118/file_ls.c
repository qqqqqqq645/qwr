/* 파일 정보를 읽어다음과 같이 출력
 * ./file_ls	file_ls.c
 * Filename	inode no	link filesize blocksize	number of books
 * file_ls.c	3478564		1	xxx	1024		8
 */
#include <stdio.h>
#include <sys/stat.h>

main(int argv,char *argc[]){
	struct stat buf;
	char *msg;
	printf("%12s%12s%8s%12s%14s%20s\n","Filename","inode_no","link",
	"filesize","blocksize","number_of_blocks");
	lstat(argc[1],&buf);
	
	int i;
	for(i=0;i<78;i++)
		printf("-");
	printf("\n%12s",argc[1]);
	printf("%12d",buf.st_ino);
	printf("%8d",buf.st_nlink);
	printf("%12d",buf.st_size);
	printf("%14d",buf.st_blksize);
	printf("%20d\n",buf.st_blocks);
	
}
