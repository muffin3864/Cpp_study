
#include <stdio.h>

int Add(int a, int b)
{
	a;
	return a + b;
}


// 함수
int main()
{
	int a = 100;
	a;
	int iData = Add(100, 200);

	iData = Add(400, 100);
	
	iData = Add(600, 300);
	
	iData = Add(200, 500);




	// 반복문
	//for(/*반복자 초기화*/; /*반복자 조건 체크*/; /*반복자 변경*/)
	//{

	//}

	for (int i = 0; i < 4; ++i)
	{
		if (i % 2 == 1)
		{
			continue;
		}

		printf("Output Test\n");
	}


	/*int i = 0;
	while (i < 2)
	{
		printf("Output Test\n");

		++i;
	}*/

	int i = 0;
	int i2 = 2;


	// 콘솔
	// printf
	printf("abcdf %d \n", 10);
	printf("abcdf %f \n", 3.14f);

	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d \n", i);
	}


	//scanf

	int iInput = 0;
	scanf_s("%d", &iInput);



	// 함수가 사용하는 메모리 영역
	// 스택 메모리 영역




	return 0;
}

// 단축키

// 지정한 구문 주석			: Ctrl + k, c
// 지정한 구문 주석 해제	: ctrl + k, u
// Alt Drag

// 디버깅
// 디버깅 시작 : F5
// 디버깅중단점까지 코드 실행

// 중단점 생성 및 해제 : F9
// 디버깅 중, 구문 수행 : F10
// 디버깅 중, 구문 수행(함수 진입) : F11
// 디버깅 중, 디버깅 종료하기 : shift + F5
