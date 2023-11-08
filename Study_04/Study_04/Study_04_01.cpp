#include <stdio.h>

// 변수의 종류
// 1. 지역변수
// 2. 전역변수
// 3. 정적변수(static)
// 4. 외부변수(extern)

// 메모리 영역
// 1. 스택 영역
// 2. 데이터 영역
// 3. 읽기 전용(코드, ROM)
// 4. 힙 영역



// 전역변수
int g_i = 0;	// Data 영역

// Data 영역 특징
// 프로그램 시작 시 생성
// 프로그램 종료 시 해제

#include "func.h"
#include "common.h"


int Test()
{
	static int i = 0;

	++g_i;
	++i;

	return i;
}


int main()
{
	g_iStatic = 100;
	g_iExtern = 500;

	// F12 : 선언 위치로 이동
	Add(0, 0);

	Test();
	Test();
	Test();
	Test();
	int iCall = Test();

	g_i = 0;
	printf("Test 함수 호출 횟수 : %d\n", iCall);


	// 포인터 변수
	// 주소를 저장하는 변수
	// 자료형 + * 변수명
	// 해당 포인터에게 전달된 주소를 해석하는 단위
	int i = 100;
	float f = 3.f;

	int* pInt = (int*)&f;
	
	// 주소로 접근
	i = *pInt;

	// 주소의 단위
	// BYTE



	return 0;
}