#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX_LINES 100
#define MAX_LINE_LEN 256

int main(void) {
	char str_bufs[MAX_LINES][MAX_LINE_LEN];
	char *str = NULL;
	int i = 0;
	
	do {
		str = gets(str_bufs[i++]);
	} while (str != NULL && i < MAX_LINES);
	
	for (i=0; str_bufs[i][0] != '\0' && i < MAX_LINES; i++)
		puts(str_bufs[i]);
		
	return 0;
}
