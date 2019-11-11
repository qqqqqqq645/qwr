/*
 * 8장 파일 처리
 * 파일 이름 : file_copy.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
main( int argc, char *argv[])//argv[0] == ./file_copy,[1] = file1 [2] = file2
{
	FILE * src; //sorce file
	FILE * dst; // destination file
	char ch;
	int count = 0;

	if(argc <3){
		printf("Usage: file_copy source_file destination file\n");
		exit(1);
	}
	if((src = fopen(argv[1],"r"))==NULL){
		perror("fopen:src");
		exit(1);
	}

	if((dst = fopen(argv[2],"w"))==NULL){
		perror("fopen:dst");
		exit(1);
	}
	
	while(!feof(src)){
		ch=(char)fgetc(src);
		if(ch!=EOF)
			fputc((int)ch,dst);
		count++;
	}
	printf("count = %d\n",count);
	fclose(src);
	fclose(dst);
}
