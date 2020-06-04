#define _CRT_SECURE_NO_WARNINGS

// 함수 포인터 이야기
#include <stdio.h>

void foo() { printf("foo()\n"); }

int main() {
	// 함수 선언 방법
	// 리턴타입 함수명([매개변수,...]);
	// int foo(int);
	
	// 함수의 타입: 함수의 리턴 타입
	// int ret = foo(1);

	// 1. 함수 포인터의 선언: 함수의 시그니처(함수의 선언에서 함수명을 뺀 나머지) 사용
	// 리턴타입(*변수명)([매개변수,...]);
	void(*fp)();

	// 2. 함수의 주소를 얻는 방법: 함수의 이름이 곧 함수의 시작 주소입니다.
	fp = foo;	// &를 사용하셔도 됩니다.

	// 3. 함수 포인터의 호출: 함수 호출 연산자(())를 사용 -> 포인터(인자,...);
	(*fp)();
	fp();

	

}
