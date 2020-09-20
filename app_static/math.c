#include <stdio.h>
#include <string.h>
#include "math.h"

static int test_a = 1;
static int test_so = 1;
static int cnt = 1;
double add(double a, double b)
{
	printf("app No.%d math add\n", cnt++);
	return (a+b);
}

double sub(double a, double b)
{
	printf("app No.%d math sub\n", cnt++);
	return (a-b);
}

double mul(double a, double b)
{
	printf("app No.%d math mul\n", cnt++);
	return (a*b);
}

double div(double a, double b)
{
	printf("app No.%d math div\n", cnt++);
	return (a/b);
}

void print()
{
	printf("app math start\n");
	#ifdef XSF_A_LIB
	printf("C static lib print test_a val %d \n", test_a++);
	#endif

	#ifdef XSF_SO_LIB
	printf("C dynamic print test_so val %d \n", test_so++);
	#endif
	printf("app math end\n");
}
