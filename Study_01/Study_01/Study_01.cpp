

#define HUNGRY 0x1
#define THIRSTY 0x2
#define TIRED 0x4
#define FIRE 0x8 

#define COLD 0x10
#define POISON 0x20
#define POISON 0x20
#define POISON 0x40
#define POISON 0x80

#define POISON 0x100
#define POISON 0x200
#define POISON 0x400
#define POISON 0x800


// 1. 가독성
// 2. 유지보수


// 주석
// 설명, 역할, 코드로 인식되지 않는다.

// 전역변수
int global = 0;

int Add(int left, int right)
{
	return left + right;
}

// 함수.
int main()
{
	// 자료형 (크기 단위, byte) Data Type
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)
	int i = 0;

	// 1바이트로 양수만 표현
	// 256 가지 -> 0 ~ 255
	unsigned char c = 0;
	c = 0;
	// c = 255;
	c = -1;

	// 1바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = -1;

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다.

	int a = 4 + (int)4.0;

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 보다 더 아래의 소수점까지
	// 정확하게 표현이 가능하다.

	// 정수는 정수끼리, 실수는 실수끼리 연산하되,
	// 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자.
	float f = 10.2415f + (float)20;

	// 실수를 상수로 적을 경우 소수점 뒤에 f를 붙이면 float 자료형으로,
	// f를 붙이지 않으면 double 자료형으로 간주한다.
	// 0.1f; 0.1;


	// 연산자
	// 대입 연산자, =

	// 산술 연산자
	// +, -, *, /, %(모듈러스, 나머지, 피연산자가 모두 정수)
	// ++, -- (증감 연산자)
	// 한 단계 증가 또는 감소
	int data = 10 + 10;
	// data = data + 20;
	data += 20;

	data = (int)(10.f / 3.f);


	data = 0;
	++data;	// 전위(전치)
	data++;	// 후위(후치)
	// 후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.


	data = 0;

	a = 10;
	data = a++;	// 10
	data = ++a;	// 11

	data = 0;
	data--;
	data--;

	// 논리 연산자
	// !(역), &&(And), ||(Or)
	// 참(true), 거짓(false)
	// 참 : 0이 아닌 값, 주로 1
	// 거짓 : 0
	bool truefalse = false;
	bool Istrue = 100;

	Istrue = true;
	Istrue = !Istrue;

	int iTrue = 100;
	iTrue = !iTrue;

	iTrue = 0 && 200;
	iTrue = 0 || 0;

	// 비교 연산자
	// ==, !=, <, <=, >, >=
	// 참, 거짓


	// 구문
	// if, else
	data = 0;
	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		// if 가 참인 경우 수행
	}
	else
	{
		// if 가 거짓인 경우 수행
	}


	// switch case

	int iTest = 20;
	switch (iTest)
	{
	case 10:
	case 20:
	case 30:



		break;
	default:

		break;
	}


	if (iTest == 10 || iTest == 20 || iTest == 30)
	{

	}
	else if (iTest == 20)
	{

	}
	else
	{

	}


	// 삼항 연산자
	// :?
	iTest == 20 ? iTest = 100 : iTest = 200;

	// 같은 의미
	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}


	// 비트 연산자
	// 쉬프트 <<, >>
	unsigned char byte = 13;
	byte <<= 3;	// 2^n 배수
	byte >>= 2; // 2^n 나눈 몫

	// 비트 곱(&), 합(|), xor(^), 반전(~)
	// 비트단위로 연산을 진행,
	// & 둘다 1인 경우 1
	// | 둘중 하나라도 1이면 1
	// ^ 같으면 0, 다르면 1
	// ~ 1은 0으로, 0은 1로

	unsigned int iStatus = 0;


	// 상태 추가
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// 상태 확인
	if (iStatus & THIRSTY)
	{

	}

	// 특정 자리 비트 제거
	iStatus &= ~THIRSTY;


	// 변수
	// 1. 지역변수
	// 2. 전역변수
	// 3. 정적변수
	// 4. 외부변수





	// 지역 변수
	int iName = 0;

	// 괄호 안에 선언된 변수(함수, 지역)
	{
		// 변수명 규칙
		int iName = 100;
		iName;
		{
			{

			}
		}
	}


	iName = 100;

	// 함수
	data = Add(10, 20);



	return 0;
}