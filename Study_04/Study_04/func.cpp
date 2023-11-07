#include "func.h"
#include "common.h"

#include <stdio.h>

int Add(int a, int b)
{
	printf("g_iStatic의 값은 : %d", g_iStatic);
	printf("g_iStatic의 값은 : %d", g_iExtern);
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}