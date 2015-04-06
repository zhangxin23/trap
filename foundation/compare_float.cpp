#include <stdio.h>
#include <stdlib.h>

int main()
{
	float f = 2.0 / 3.0;
	float expect_f = 0.666667;
	double d = 2.0 / 3.0;
	double expect_d = 0.666667;
	printf("f = %f, expect_f = %f, d = %lf, expect_d = %lf\n",
			f, expect_f, d, expect_d);

	printf("f == expect_f && d == expect_d:\n");
	if(f == expect_f && d == expect_d)
		printf("\tEqual!\n");
	else
		printf("\tNot equal!\n");

	printf("abs(f - expect_f) < 0.00001 && abs(d - expect_d) < 0.00001:\n");
	if(abs(f - expect_f) < 0.00001 && abs(d - expect_d) < 0.00001)
		printf("\tEqual!\n");
	else
		printf("\tNot equal!\n");
}
