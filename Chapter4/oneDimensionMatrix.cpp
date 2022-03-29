#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "time.h"
using namespace std;
int get_data(int *, const int, const int);
void show_data(int *, const int, const int);
void add(int *, const int, const int, int *, const int, const int, int *, const int, const int);
void multiply(int* p, const int r1, const int c1, int* q, const int r2, const int c2, int* r, const int r3, const int c3);

int main(void)
{
	int matrixA[3][4];
	int matrixB[3][4];
	int matrixC[3][4];
	int matrixD[5][6];
	int matrixE[5][6];
	int matrixF[5][6];
	int matrixG[4][5];
	int matrixH[3][5];
	srand(time(NULL));
	get_data(&matrixA[0][0], 3,4);
	show_data(*matrixA, 3, 4);
	get_data(*matrixB, 3, 4);
	show_data(*matrixB, 3, 4);
	add(*matrixA, 3,4, *matrixB, 3, 4, *matrixC, 3, 4);
	show_data(*matrixC, 3, 4);
	get_data(*matrixD, 5, 6);
	show_data(*matrixD, 5, 6);
	get_data(*matrixE, 5, 6);
	show_data(*matrixE, 5, 6);
	add(*matrixD, 5,6, *matrixE, 5,6, *matrixF, 5, 6);
	show_data(*matrixF, 5, 6);
	get_data(*matrixG, 4, 5);
	show_data(*matrixG, 4, 5);
	multiply(*matrixA, 3, 4, *matrixG, 4, 5, *matrixH, 3, 5);
	show_data(*matrixH, 3, 5);
	system("pause");
	return 0;
}

int get_data(int * p, const int row, const int col)
{

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			*p = rand() % (row * col);//수정 필요
			p++;
		}
	return 1;
}
void show_data(int *p, const int row, const int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			cout << *p << " ";
			p++;
		}
		cout << '\n';
	}
	cout << '\n' << '\n';
}
//1차원 배열로 구현한다 
void add(int *p, const int r1, const int c1, int *q, const int r2, const int c2, int *r, const int r3, const int c3)
{
	for (int i = 0; i < r3; i++)
		for (int j = 0; j < c3; j++) {
			*r = *p + *q;
			r++, q++, p++;
		}
}
void multiply(int* p, const int r1, const int c1, int* q, const int r2, const int c2, int* r, const int r3, const int c3)
{
	for (int i = 0; i < r3; i++)
		for (int j = 0; j < c3; j++) {
			for (int k = 0; k < c1; k++) {
				*r = *(p + k + 3 * i) + *(q + 5 * k + i);
			}
		}
}