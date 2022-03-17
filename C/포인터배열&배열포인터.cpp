#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int *p;
	int *p1[3];
	int (*p2)[4];
	
	p = *a;
	p1[0] = a[0];
	p1[1] = a[1];
	p1[2] = a[2];
	p2 = a;
	
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 4; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("*p = %d\n", *p++);
	printf("*p1[0] = %d\n", *p1[0]++);
	printf("**p2 = %d\n", **p2++);
	
	printf("\nAfter ++\n\n");
	
	printf("*p = %d\n", *p);
	printf("*p1[0] = %d\n", *p1[0]);
	printf("**p2 = %d\n", **p2);
}
