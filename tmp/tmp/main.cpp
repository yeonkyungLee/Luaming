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
	ap = &b; //const가 앞에 붙어 있으면 가리키고 있는 값을 못바꿈, 대신 변수 자체는 바꿀 수 있음

	*ap2 = 'b'; //const가 뒤에 붙어 있으면 가리키는 값은 바꿀수 있지만 변수는 못바꿈
	ap2 = &b;  //error

	*ap3 = 'b'; //둘다 안됨
	ap3 = &b;

	*/

	printf("0x%p\n", main);

}