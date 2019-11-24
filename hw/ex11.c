#include <stdio.h>
#include <search.h>
#define TABLESIZE 5 

int compare(const void *ap, const void *bp){
	return (*(int*) ap - *(int *)bp);
}

main(){
	int table[TABLESIZE] = {1,2,3,4,5};
	//unsigned int n = TABLESIZE;
	size_t  n = TABLESIZE;
	size_t t = n;
	int item, *ptr;
	item = 6;
	//void *lsearch(const void *key, void *base, size_t *nmemb,
	// size_t size, comparison_fn_t compar);
	ptr = (int *)lsearch(&item, table, &n, sizeof(int),compare);
	//lsearch 함수는 배열을 선형탐색하여 아이템값이 있으면 해당 주소 반환,
	//없으면 배열의 끝에 새로 추가하고 그 주소를 반환
	if(ptr > table + n - 1)
	//ptr이 가리키는 주소가 배열의 마지막 주소보다 크면 배열에 값이 없고
	//새로 추가된 상태이다
		printf("%d is not in the table (1-%d), but added.\n",item,n);
	else
		printf("%d is in the table (1-%d).\n",*ptr, n);
	item = 7;

	//void *lfind(const void *key, const void *base, size_t,
	//*nmemb, size_t size, comparison_fn_t compart)
	//lfind함수는 위와같이 배열을 선형탐색하는데 값이 없으면
	//새로 추가하지 않고 NULL 반환
	ptr = (int *) lfind( &item, table, &n, sizeof(int), compare);
	if ( ptr == NULL )
		printf("%d is not in the table (1-%d) .\n",item,n);
	else
		printf("%d is in the table (1-%d).\n",*ptr,n);
}




	/*
	int * tp = table;
	//if(n != t)
	printf("sizeof int = %d\n",sizeof(int));
	printf("array start addr = %d\n", &table[0]);
	printf("5 address = %d\n",&table[4]);
	printf("ptr = %d, tp = %d\n",ptr,tp);
	printf("different between ptr,tp = %d\n",ptr-tp);

	*/
