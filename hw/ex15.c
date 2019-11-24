/*
 * 트리 탐색 이진트리
 * testtsearch.c
 */

#include <stdio.h>
#include <search.h>
#include <string.h>

struct node {
	char *name;
	int age;
};
#define TABLESIZE 50

char nametable [TABLESIZE * 20]; //이름을 저장할 테이블
struct node nodetable [TABLESIZE]; //저장할 노드 테이블
struct node *root = NULL;//루트 노드

// 트리가 수행할 함수
int compare (const void *cp1, const void *cp2) {
	return strcmp(((struct node *)cp1)->name, ((struct node *)cp2)->name);
}
//twalk 함수가 수행할 함수
void print_node(const void *, VISIT, int);

int main(){
	char *nameptr = nametable;
	struct node *nodeptr = nodetable;
	struct node **ret;
	int i = 0;
	//트리에 데이터 입력, EOF 로 입력 종료
	while (scanf("%s %d", nameptr, &nodeptr->age) != EOF
			&& i++ < TABLESIZE) {
		nodeptr->name = nameptr;
		//트리에 넣기
		ret = (struct node **) tsearch ((void *) nodeptr,
				(void **) &root, compare);
		printf("\"%s\" 님이 ", (*ret)->name);
		if(*ret == nodeptr)
			printf("트리에 추가되었습니다.\n");
		else
			printf("트리에 이미 존재합니다.\n");
		nameptr += strlen(nameptr)+1;
		nodeptr++;
	}
	//트리 출력
	twalk((void *) root, print_node);
}

// twalk가 노드를 처음 만날때 출력
void print_node(const void *nodeptr, VISIT order, int level){
	if(order == preorder || order == leaf)
		printf("이름 = %-20s, 나이 = %d\n",
				(*(struct node **) nodeptr)->name,
				(*(struct node **) nodeptr)->age);
}
