#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
main(int argc, char *argv[]){
	FILE *dst;
	char ch;
	dst = fopen(argv[1],"r");	
	while(!feof(dst)){
		ch=(char)fgetc(dst);
//		fputc(ch,stdout);
		printf("%c",ch);
	}
	fclose(dst);
	
}
