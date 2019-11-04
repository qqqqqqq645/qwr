/*
 * 4장 디버깅과 오류 처리
 * 파일 이름 : dbg_main.c
 */
#include <stdio.h>

extern int my_sum(int k); //cf.dbg_file1.c
main(int argc, char *argv[])
{
	int i;
	int k;
	int sum=0;

	if(argc<2){
	fprintf(stderr,"Usage:dbg_main3\n");
	exit(1);
	}
	
	k=atoi(argv[1]);
	sum=my_sum(k);
	
	printf("sum=%d\n",sum);
}
