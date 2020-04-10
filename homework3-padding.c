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
	struct student pst;		// ����ü ����

	printf("size of student = %ld\n", sizeof(struct student));		// ����ü�� ũ��(���� 19bytes�� ���;� ������ �е��� ���ؼ� char ���� 3bytes , short���� 2bytes �߰���)
	printf("size of int = %ld\n", sizeof(int));			// int ���� ũ��
	printf("size of short = %ld\n", sizeof(short));		// short���� ũ��

	return 0;		// 0 ���� ��ȯ
}
