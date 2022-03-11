#include <stdio.h>
#define TOP 10
static unsigned long int next = 1;  /* the seed  */
int rand1(void)
{
	/* magic formula to generate pseudorandom number */
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
	next = seed;
}

int main(void)
{
	int count;
	unsigned seed;
	int data[TOP];
	printf("Please enter your choice for seed.\n");
	while (scanf("%u", &seed) == 1)
	{
		srand1(seed);    /* reset seed */
		for (count = 0; count < TOP; count++)
			data[count] = rand1() % TOP;
		for (count = 0; count < TOP; count++)
			printf("%d  ", data[count]);
		printf("\n\n");
		printf("Please enter next seed (q to quit):\n");
	}
	printf("Done\n");
	getchar();
	return 0;
}
