//상이한 크기의 행렬을 get_data() 함수로 처리하는 문제를 해결하기 위한 class 사용
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
/*
행렬이 여러개 일 때 하나의 function으로 처리하는 방법을 고안
//행렬의 row, col이 다르면 오류 발생 - 해결 방법: 1차원 배열로 구현
*/
int get_data(int *, int, int);//matrixA는 처리하나 matrixD 는 처리 못한다.
void show_data(int *, int, int);
void add(int *, int, int, int *, int, int, int *, int, int);
void multiply(int*, int, int, int*, int, int, int*, int, int);

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
	//add(*matrixA, 3,4, *matrixB, 3, 4, *matrixC, 3, 4);
	//show_data(*matrixC, 3, 4);
	get_data(*matrixD, 5, 6);
	show_data(*matrixD, 5, 6);
	get_data(*matrixE, 5, 6);
	show_data(*matrixE, 5, 6);
	/*add(*matrixD, 5,6, *matrixE, 5,6, *matrixF, 5, 6);
	show_data(*matrixF, 5, 6);
	get_data(*matrixG, 4, 5);
	show_data(*matrixG, 4, 5);
	multiply(*matrixA, 3, 4, *matrixG, 4, 5, *matrixH, 3, 5);
	show_data(*matrixH, 3, 5);*/
	system("pause");
	return 0;
}

int get_data(int *p, int row, int col)
{

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++) {
			*p = rand() % (row * col);//수정 필요
			p++;
		}
	return 1;
}
void show_data(int *p, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {
			printf("%d ", *p);//수정 필요
			p++;
		}
		printf("\n");
	}
	printf("\n\n");
}
//1차원 배열로 구현한다 
void add(int *p, int r1, int c1, int *q, int r2, int c2, int *r, int r3, int c3)
{}
void multiply(int*p, int, int, int*q, int, int, int*r, int, int)
{}