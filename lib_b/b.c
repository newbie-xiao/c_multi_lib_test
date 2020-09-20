#include <stdio.h>
#include <string.h>
#include "b.h"
#include "math.h"
static int test_a = 1;
static int test_so = 1;

static void func_b()
{
	printf("b.c func func_b() test \n");
}

void print_b()
{
	printf("b.c func print_b test \n");
	printf("add 1+1 = %d\n", (int)add(1,1));
	printf("sub 2-1 = %d\n", (int)sub(2,1));
	printf("mul 2*1 = %d\n", (int)mul(2,1));
	printf("div 2/1 = %d\n", (int)div(2,1));
	#ifdef XSF_A_LIB
	printf("b.c C static lib print test_a val %d \n", test_a++);
	#endif

	#ifdef XSF_SO_LIB
	printf("b.c C dynamic print test_so val %d \n", test_so++);
	#endif
	
	func_b();
}
