#include <stdio.h>
#include <string.h>
#include <dlfcn.h>
//#include <stdlib.h>
#include "math.h"
#include "a.h"
#include "b.h"


void main()
{
	void *handle_a = NULL;
	void *handle_b = NULL;
	#if 1
	printf("-----dlopen-----\n");
	handle_a = dlopen ("liba.so", RTLD_NOW|RTLD_LOCAL|RTLD_DEEPBIND);
	if (!handle_a) 
	{
		fprintf (stderr, "%s\n", dlerror());
		//exit(1);
		return;
	}
	
	handle_b = dlopen ("libb.so", RTLD_NOW|RTLD_LOCAL|RTLD_DEEPBIND);
	if (!handle_b) 
	{
		fprintf (stderr, "%s\n", dlerror());
		//exit(1);
		return;
	}
	printf("-----dlopen done-----\n");
	#endif
	
	int a = 4, b = 2;
	printf("-----test start-----\n");
	print();
	printf("%d + %d = %d\n", a, b, (int)add(a, b));
	printf("%d - %d = %d\n", a, b, (int)sub(a, b));
	printf("%d * %d = %d\n", a, b, (int)mul(a, b));
	printf("%d / %d = %d\n", a, b, (int)div(a, b));
	
	printf("\n---test a dynamic lib\n");
	print_a();
	printf("---test add sub mul div---\n");
	printf("%d + %d = %d\n", a, b, (int)add(a, b));
	printf("%d - %d = %d\n", a, b, (int)sub(a, b));
	printf("%d * %d = %d\n", a, b, (int)mul(a, b));
	printf("%d / %d = %d\n", a, b, (int)div(a, b));
	//math_a_test符号隐藏后，外部无法调用
	//math_a_test();

	printf("\n---test b dynamic lib\n");
	print_b();
	printf("---test add sub mul div---\n");
	printf("%d + %d = %d\n", a, b, (int)add(a, b));
	printf("%d - %d = %d\n", a, b, (int)sub(a, b));
	printf("%d * %d = %d\n", a, b, (int)mul(a, b));
	printf("%d / %d = %d\n", a, b, (int)div(a, b));
	
	printf("-----test end-----\n");
}
