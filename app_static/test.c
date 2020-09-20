#include <stdio.h>
#include <string.h>
#include "math.h"
#include "a.h"
#include "b.h"

void main()
{
	int a = 4, b = 2;
	printf("-----test start-----\n");
	print();
	printf("%d + %d = %d\n", a, b, (int)add(a, b));
	printf("%d - %d = %d\n", a, b, (int)sub(a, b));
	printf("%d * %d = %d\n", a, b, (int)mul(a, b));
	printf("%d / %d = %d\n", a, b, (int)div(a, b));
	print(); 
	
	printf("\ntest a static lib\n");
	print_a();

	printf("\ntest b static lib\n");
	print_b();
	printf("-----test end-----\n");
}
