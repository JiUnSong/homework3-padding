/*
 ============================================================================
 Name        : homework3-padding.c
 Author      : Ji Un Song
 Version     :
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>

struct student {
	char lastName[13];		// 13bytes
	int studentId;			// 4bytes
	short grade;			// 2bytes
};

int main(void) {
	struct student pst;		// 구조체 선언

	printf("size of student = %ld\n", sizeof(struct student));		// 구조체의 크기(원래 19bytes가 나와야 하지만 패딩을 통해서 char 에서 3bytes , short에서 2bytes 추가됨)
	printf("size of int = %ld\n", sizeof(int));			// int 형의 크기
	printf("size of short = %ld\n", sizeof(short));		// short형의 크기

	return 0;		// 0 값을 반환
}
