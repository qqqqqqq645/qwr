/*
 * 해쉬탐색
 * testhsearch.h
 */

#include <stdio.h>
#include <search.h>
#include <string.h>

struct info {
	int id, age;
};

#define TABLESIZE 50

int main(){
	char nametable [TABLESIZE*20];
	char *nameptr = nametable;//이름테이블에서 다음 이름
	struct info infotable[TABLESIZE];
	struct info *infoptr = infotable;//info테이블에서 다음 info*
	ENTRY item, *found; //해쉬테이블에 entry구조체
	char name[30];
	int i = 0;

	//해쉬 테이블 생성
	(void) hcreate (TABLESIZE);
	printf("Hash table created insert data\n");
	//테이블에 데이터 입력, EOF로 입력 종료
	while (scanf("%s %d %d", nameptr, &infoptr->id,&infoptr->age)
			!= EOF && i++ < TABLESIZE){
		item.key = nameptr; //키값으로 이름 설정
		item.data = (char *) infoptr; //데이터값으로 info구조체

		//해쉬 테이블에 넣기 Enter
		(void) hsearch(item, ENTER);
		nameptr +=strlen(nameptr) + 1; //이름테이블에서 다음 자리로 이동
		infoptr++;//다음 info구조체 인덱스로 이동
	}

	//해쉬 테이블 탐색
	printf("Data insertion end search data\n");
	//EOF로 탐색 종료
	while (scanf("%s", item.key)!=EOF){
		if((found = hsearch(item, FIND)) != NULL){
			//테이블에 키가 있으면 해당 주소, 없으면 NULL반환
				printf("found %s, id=%d, age=%d\n",
						found->key,
						((struct info *)found->data)->id,
						((struct info *)found->data)->age);
		} else {
				printf("no such employee %s\n",name);
		}
	}
	printf("Program end\n");
}
