//1���� list�� ���� ��� ����, ����
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define AROWS 3
#define ACOLS 4
#define BROWS 4
#define BCOLS 5
#define CROWS 4
#define CCOLS 5
static unsigned long int next = 1;
int getData(int *a, int size);//���� �����Ͽ� ó��
void showData(int *a, int rows);//������ ���
int rand1(void);
void srand1(unsigned int seed);
void addData(int *a, int arows, int *b, int brows);
void multiply(int *a, int arows, int *b, int brows, int *c, int crows);

void main()
{
    srand(time(NULL));
    int *a;
    int *b;
    int *c;
    getData(a, AROWS*ACOLS);//������ ����Ͽ� �Է�
    getData(b, BROWS*BCOLS);//������ ����Ͽ� �Է�
    showData(a, AROWS);
    getData(c, CROWS*CCOLS);////������ ����Ͽ� �Է�
    addData(a, AROWS, b, BROWS);
    addData(a, AROWS, c, BROWS);
    multiply(a, AROWS * ACOLS,  b, BROWS * BCOLS, c, CROWS * CCOLS);
    system("pause");
}

void showData(int* a, int rows) {
    int* end;
    int* ap;
    ap = a;
    while (*ap != NULL) {
        
    }
    printf("\n");
}

void multiply(int* a, int arows, int* b, int brows, int* c, int crows) {

}

int getData(int *a, int size) {
    int *end;
    int* ap;
    unsigned seed;
    printf("Please enter your choice for seed.\n");
    scanf("%u", &seed);
    srand1(seed);    /* reset seed */
    end = a + size - 1;
    for (ap = a; ap <= end; ap++)
        *ap = rand1() % 10;
    return 0;
}

void addData(int* a, int arows, int* b, int brows) {

}

int rand1(void) {
    /* magic formula to generate pseudorandom number */
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed) {
    next = seed;
}