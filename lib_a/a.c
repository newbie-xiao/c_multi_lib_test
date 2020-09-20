#include <stdio.h>
#include <string.h>
#include "a.h"
#include "math.h"
static int test_a = 1;
static int test_so = 1;

static void func_a()
{
	printf("a.c func func_a() test \n");
}

void print_a()
{
	printf("a.c func print_a test\n");
	printf("add 1+1 = %d\n", (int)add(1,1));
	printf("sub 2-1 = %d\n", (int)sub(2,1));
	printf("mul 2*1 = %d\n", (int)mul(2,1));
	printf("div 2/1 = %d\n", (int)div(2,1));
	#ifdef XSF_A_LIB
	printf("a.c C static lib print test_a val %d \n", test_a++);
	#endif

	#ifdef XSF_SO_LIB
	printf("a.c C dynamic print test_so val %d \n", test_so++);
	#endif
	
	func_a();
}
