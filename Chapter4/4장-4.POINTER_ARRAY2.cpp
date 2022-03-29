//4��-4. POINTER_ARRAY2.cpp    4.3 pointer ������ reference ����
#include <iostream>
using namespace std;
#define ROWS 2
#define COLS 3
int sum(int (&)[ROWS][COLS], int row);
int sum2(int (*t)[COLS], int row);//pointer-to-array
void main(void){
	int num[2][3] ={{1, 2, 3}, {4, 5, 6}};
	int total = 0;
	total = sum(num, ROWS);
	cout<<"sum()::totoal = "<<total<<endl;
	total = sum2(num, ROWS);
	cout<<"sum2()::totoal = "<<total<<endl;
	system("pause");
}
int sum(int (&t)[ROWS][COLS], int row)//how to pass 2D array as reference
{
	int total = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			//total += (*t)[j];//t�� pointer�� ���
			total += t[i][j];
		}
	}
	return total;
}
int sum2(int (*t)[COLS], int row)//how to pass 2D array as pointer
{
	int total = 0;
	for (int i = 0; i < row; i++)
	{
			for (int j = 0; j < COLS; j++)
			total += t[i][j];//t�� �迭�� ��� ����
	}
	return total;
}