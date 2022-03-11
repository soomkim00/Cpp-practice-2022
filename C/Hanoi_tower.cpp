#include <stdio.h>

void hanoi_tower(int n, int ox, int tx, int mx);

int main(void) {
	int n;
	printf("Enter the hitght of the tower\n");
	scanf("%d",&n);
	hanoi_tower(n, 1, 3, 2);
	return 0;
}

void hanoi_tower(int n, int ox, int tx, int mx) {
	if (n<1) printf("Error!");
	else if (n==1) printf("%d -> %d\n", ox, tx);
	else {
		hanoi_tower(n-1, ox, mx, tx);
		printf("%d -> %d\n", ox, tx);
		hanoi_tower(n-1, mx, tx, ox);
	}
}
