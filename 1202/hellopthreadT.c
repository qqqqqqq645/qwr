#include <pthread.h>

void * hello_thread(void *arg){

	printf("Thread:Hello, World\n");
	return arg;
}

void func1(void *arg){
	printf("asdf");
}

main(){
	pthread_t tid;
	int status;
	int i;
	printf("func = %d\n",(int *)hello_thread);
	printf("func2 = %d\n",(int *)func1);
		status = pthread_create(&tid,NULL,hello_thread,NULL);
	while(1){
		scanf("%d",&i);
		status = pthread_create(&tid,NULL,hello_thread,NULL);
		status = pthread_create(&tid,NULL,hello_thread,NULL);
	}
		if(status !=0)
		perror("Create thread");
	pthread_exit(NULL);

}
