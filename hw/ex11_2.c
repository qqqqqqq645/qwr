#include <stdio.h>
#include <search.h>
//#define TABLESIZE 5

int compare(const void *ap, const void *bp){
	return (*(int*) ap - *(int *)bp);
}

main(){
	int table[10] = {1,2,3,4,5};
	//unsigned int n = TABLESIZE;
	//	unsigned int n = 5;
	size_t n = 5;
	int item, *ptr;

	item = 6;
	//void *lsearch(const void *key, void *base, size_t *nmemb,
	// size_t size, comparison_fn_t compar);
	ptr = (int *)lsearch(&item, table, &n, sizeof(int),(int(*) (const void*
					, const void *))compare);
	if(ptr >= table + n - 1)
		printf("%d is not in the table (1-%d), but added.\n",item,n);
	else
		printf("%d is in the table (1-%d).\n",*ptr, n);
	item = 7;
	int i;
	for(i=0;i<10;i++)
		printf("%d ",table[i]);
	printf("\n");
	/*
	//void *lfind(const void *key, const void *base, size_t,
	//*nmemb, size_t size, comparison_fn_t compart)
	//
	ptr = (int *) lfind( &item, table, &n, sizeof(int), compare);
	if ( ptr == NULL )
		printf("%d is not in the table (1-%d) .\n",item,n);
	else
		printf("%d is in the table (1-%d).\n",*ptr,n);*/
}
