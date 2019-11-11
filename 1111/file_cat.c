#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
main(int argc, char *argv[]){
	FILE *dst;
	char ch;
	
	if(argc<2){
		printf("Usage :file_cat source_file\n");
	}
	if((dst = fopen(argv[1],"r"))==NULL){
		perror("fopen:src");
		exit(1);
	}
	while(!feof(dst)){
		ch=fgetc(dst);
		if(ch!=EOF)
		fputc(ch,stdout);
	}
	
}
