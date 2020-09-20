#include <stdio.h>
#include <string.h>
#include "math.h"

static int test_a = 1;
static int test_so = 1;
static int cnt = 1;
double add(double a, double b)
{
	printf("b No.%d math add:\t", cnt++);
	return (a+b);
}

double sub(double a, double b)
{
	printf("b No.%d math sub:\t", cnt++);
	return (a-b);
}

double mul(double a, double b)
{
	printf("b No.%d math mul:\t", cnt++);
	return (a*b);
}

double div(double a, double b)
{
	printf("b No.%d math div:\t", cnt++);
	return (a/b);
}

void print()
{
	printf("b math.c print start\n");
	#ifdef XSF_A_LIB
	printf("C static lib print test_a val %d \n", test_a++);
	#endif

	#ifdef XSF_SO_LIB
	printf("C dynamic print test_so val %d \n", test_so++);
	#endif
	int a = 4, b = 2;
	printf("%d + %d = %d\n", a, b, (int)add(a, b));
	printf("%d - %d = %d\n", a, b, (int)sub(a, b));
	printf("%d * %d = %d\n", a, b, (int)mul(a, b));
	printf("%d / %d = %d\n", a, b, (int)div(a, b));
	printf("b math.c print end\n");
}
