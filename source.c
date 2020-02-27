/*
Alexander Medina
Quiz Problem #9
2/26/20
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x = 0, i;
	double z;

	for(i = 0; i<11; i++)
	{
		x = x + 2;
	}
	printf("End of Loop Result: %d\n", x);
	z = (double) x/20;
	printf("x/20 =  %.3f\n", z);

}
