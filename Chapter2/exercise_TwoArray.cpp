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
int getData(int[][COLS], int);//���� �����Ͽ� ó��


void main()
{
    srand(time(NULL));
    int *a;
    int *b;
    int *c;
    getData(a, AROWS*ACOLS);//������ ����Ͽ� �Է�
    getData(b, BROWS*BCOLS);//������ ����Ͽ� �Է�
    showData(a, ROWS);
    getData(c, CROWS*CCOLS);////������ ����Ͽ� �Է�
    addData(a, ROWS, b, ROWS);
    addData(a, ROWS, C, BROWS);
    multiply(a, AROWS * ACOLS,  b, BROWS * BCOLS, c, CROWS * CCOLS);
    system("pause");
}