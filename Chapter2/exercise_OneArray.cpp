//2차원 배열에 대한 행렬 더하기
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define ROWS 3
#define COLS 4
#define BROWS 4
#define BCOLS 5
int getData(int[][COLS], int);//난수 생성하여 처리 - pointer만 사용하여 구현


void main()
{
    srand(time(NULL));
    int a[ROWS][COLS];
    int b[ROWS][COLS];
    int c[ROWS][COLS];
    getData(a, ROWS);
    getData(b, ROWS);
    showData(a, ROWS);
    getData(c, BROWS);//문제를 해결하기 위한 방법
    addData(a, ROWS, b, ROWS);
    addData(a, ROWS, C, BROWS);
    system("pause");
}