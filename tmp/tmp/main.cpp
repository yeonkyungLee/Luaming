#include <stdio.h>

int main(void){
	char hi[5] = "hi";
	printf("%c%c",hi[2],hi[1]);

	/*
	char a = 'a';
	char b = 'b';

	const char *ap = &a;
	char * const ap2 = &a;
	const char * const ap3 = &a;

	*ap = 'b'; ///error
	ap = &b; //const�� �տ� �پ� ������ ����Ű�� �ִ� ���� ���ٲ�, ��� ���� ��ü�� �ٲ� �� ����

	*ap2 = 'b'; //const�� �ڿ� �پ� ������ ����Ű�� ���� �ٲܼ� ������ ������ ���ٲ�
	ap2 = &b;  //error

	*ap3 = 'b'; //�Ѵ� �ȵ�
	ap3 = &b;

	*/

	printf("0x%p\n", main);

}