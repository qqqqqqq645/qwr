/*
 * testgrade.c
 * 동적 메모리 할당 함수 calloc 예제
 */

#include <stdio.h>
#include <stdlib.h>
struct student {
	char name[10];
	int mid;
	int final;
};

main(){
	int stu_num, i;
	int sum;
	float avg;
	struct student *stu_ptr;

	printf("학생 수는 ? ");
	scanf("%d",&stu_num);

	//사용자가 입력한 수만큼 메모리 할당
	//stu_ptr = (struct student *)malloc(stu_num * sizeof(struct student));
	stu_ptr = (struct student *)calloc(stu_num, sizeof(struct student));
	//malloc 함수는 인자 하나에 개수와 크기를 지정해야하지만
	//calloc 함수는 개수와 크기를 따로받는다
	
	//메모리 할당에 실패할 경우
	if(stu_ptr == NULL) {
		printf("메모리를 할당하지 못했습니다.");
		exit(-1);
	}

	//버퍼에 남아있는 내용 삭제
	fflush(stdin);
	//데이터 입력
	for(i=0;i < stu_num; i++){
		printf("%d : 번째 학생의 이름 : ",i+1);
		scanf("%s", stu_ptr[i].name);
		printf("%d : 번째 학생의 중간, 기말 : ",i+1);
		scanf("%d %d", &stu_ptr[i].mid,&stu_ptr[i].final);
		fflush(stdin);
	}
	//생성한 배열의 내용 출력
	printf("\t[성적 리스트]\n");
	printf("=========================================\n");
	printf(" 이름\t중간\t기말\t총점\t평균\n");
	printf("=========================================\n");
	for(i=0;i<stu_num;i++){
		sum = stu_ptr[i].mid + stu_ptr[i].final;
		avg = sum/2;

		printf("%s\t%d\t%d\t%d\t%4.2f\n",stu_ptr[i].name,
				stu_ptr[i].mid, stu_ptr[i].final, sum, avg);
	}
	printf("=========================================\n");
	//할당했던 메모리 해제
	free((struct student *)stu_ptr);
}
