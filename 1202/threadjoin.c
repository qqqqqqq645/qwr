//pthread join example

#include <stdio.h>
#include <pthread.h>

void *join_thread(void *arg){
	pthread_exit(arg); // return arg
}

int main(int argc, char *argv[]){

	pthread_t tid;
	int arg, status;
	void *result;
	arg = atoi(argv[1]);
	//스레드 생선
	status = pthread_create (&tid, NULL, join_thread, (void *)arg);
	status = pthread_join(tid,&result);
	return (int) result;
}
