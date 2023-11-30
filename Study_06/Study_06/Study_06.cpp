#include <stdlib.h>
#include <stdio.h>

// 메모리 영역
// 1. 스택
// 2. 데이터 
// 3. 힙
// 4. ROM(코드)




void Output(const int * pI)
{
	int i = *pI;

}


int main()
{
	// 1. const
	const int i = 100;

	// const 와 포인터
	int a = 0;
	int* pInt = &a;

	*pInt = 1;
	pInt = nullptr;

	// =============
	// const  포인터
	// =============
	int b = 0;
	const int* pConstInt = &a;

	//*pConstInt = 100;
	pConstInt = &b;

	// =============
	// 포인터 const
	// =============
	int* const pIntConst = &a;

	*pIntConst = 400;
	//pIntConst& b;

	// 초기화 시 가리킨 대상만 가리킴, 가리키는 원본을 수정 할 수 없음
	const int* const pConstIntConst = nullptr;


	{
		int a = 0;
		const int* pInt = &a;
		// *pInt = 100;
		// a = 100;

		int* p = &a;
		*p = 100;
	}


	a = 100;
	Output(&a);

	// void *
	// 1. 원본의 자료형을 정하지 않음
	// 2. 어떠한 타입의 변수의 주소든 다 저장 가능
	// 3. 역참조 불가능 
	// 4. 주소 연산 불가능
	void* pVoid = nullptr;
	float* pFloat = nullptr;

	{
		int a = 0;
		float f = 0.f;
		double d = 0.;
		long long ll = 0;

		pVoid = &a;
		pVoid = &f;
		pVoid = &d;
		pVoid = &ll;

		//*pVoid;
		//pVoid + 1;
	}

	{
	// 문자
	wchar_t wc = 49;
	short s = 49;

	char c = 1;
	c = '1';



	wc = 459;
	"4 59";



	int i = 0;
	}



	return 0;
}

// 단축키
// Crtl + Shift + Space