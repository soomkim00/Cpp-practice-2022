//2���� �迭�� ���� ��� ���ϱ�
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define ROWS 3
#define COLS 4
#define BROWS 4
#define BCOLS 5
static unsigned long int next = 1;

int getData(int a[][COLS], int rows);//���� �����Ͽ� ó�� - pointer�� ����Ͽ� ����
void showData(int a[][COLS], int rows);
int rand1(void);
void srand1(unsigned int seed);


void main()
{
    srand(time(NULL));
    int a[ROWS][COLS];
    int b[ROWS][COLS];
    int c[ROWS][COLS];
    getData(a, ROWS);
    getData(b, ROWS);
    showData(a, ROWS);
    getData(c, BROWS);//������ �ذ��ϱ� ���� ���
    showData(b, ROWS);
    showData(c, BROWS);
    //addData(a, ROWS, b, ROWS);
    //addData(a, ROWS, C, BROWS);
    system("pause");
}

int getData(int a[][COLS], int rows) {
    int count, i;
	unsigned seed;
	printf("Please enter your choice for seed.\n");
    scanf("%u", &seed);
	srand1(seed);    /* reset seed */
    for (i = rows; i > 0; i--, a++)
        for (count = 0;  count < COLS; count++)
            (*a)[count] = rand1() % 10;
	return 0;
}

void showData(int a[][COLS], int rows) {
    int count, i;
    for (i = rows; i > 0; i--, a++) {
        for (count = 0; count < COLS; count++)
            printf("%d ", (*a)[count]);
        printf("\n");
    }
    printf("\n");
}

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