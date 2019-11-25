#include <stdio.h>
#include <unistd.h>

main(int argc, char *argv []){
	//printf("%s\n",&argv[1]);
	mkdir(argv[1],0777);
	//mkdir(argv[1]);
}
