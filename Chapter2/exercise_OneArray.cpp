//2���� �迭�� ���� ��� ���ϱ�
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define ROWS 3
#define COLS 4
#define BROWS 4
#define BCOLS 5
int getData(int[][COLS], int);//���� �����Ͽ� ó�� - pointer�� ����Ͽ� ����


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
    addData(a, ROWS, b, ROWS);
    addData(a, ROWS, C, BROWS);
    system("pause");
}