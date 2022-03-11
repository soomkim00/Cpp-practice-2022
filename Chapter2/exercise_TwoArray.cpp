//1차원 list에 대한 행렬 덧셈, 곱셈
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define AROWS 3
#define ACOLS 4
#define BROWS 4
#define BCOLS 5
#define CROWS 4
#define CCOLS 5
int getData(int[][COLS], int);//난수 생성하여 처리


void main()
{
    srand(time(NULL));
    int *a;
    int *b;
    int *c;
    getData(a, AROWS*ACOLS);//난수를 사용하여 입력
    getData(b, BROWS*BCOLS);//난수를 사용하여 입력
    showData(a, ROWS);
    getData(c, CROWS*CCOLS);////난수를 사용하여 입력
    addData(a, ROWS, b, ROWS);
    addData(a, ROWS, C, BROWS);
    multiply(a, AROWS * ACOLS,  b, BROWS * BCOLS, c, CROWS * CCOLS);
    system("pause");
}