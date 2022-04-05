
//4장-7. increase.cpp   4.4.3 reference에 의한 함수 parameter 전달
#include <iostream>
using namespace std;
#define ROWS 3
#define COLS 4
#define TIERS 5
int sum(const int t[][ROWS][COLS], int);
void increase(int(*)[ROWS][COLS], int);
//void increase(int (**t)[COLS], int);
void displayArray(int(*)[ROWS][COLS], int);
void displayArray(int*);
void displayArray(int(&)[ROWS][COLS], int);
int get_data(int*, const int, const int, const int);
int* addMatrix(int*, int*);
int* addMatrix(int(*)[ROWS][COLS], int(*)[ROWS][COLS]);
//int& addMatrix(int(&) [ROWS][COLS][TIERS], int(&)[ROWS][COLS][TIERS]);

void main(void){
	//int num[TIERS][ROWS][COLS] = {{ {1, 2},{3,4},{4,5} }, { {6,7},{8,9},{10,11}}};
	//int total = 0;
	int A[3][4][5];
	int B[3][4][5];
	int C[3][4][5];

	get_data(*A[0], 3, 4, 5);
	get_data(*B[0], 3, 4, 5);
	get_data(*C[0], 3, 4, 5);

	int *D;
	D = addMatrix(*A[0], *B[0]);
	displayArray(&D[0]);
	/*displayArray(num, TIERS);
	total = sum(num, TIERS);
	cout<<"sum()::totoal = "<<total<<endl;
	increase(num, TIERS);
	displayArray(num, TIERS);
	total = sum(num, TIERS);
	cout<<"sum2()::totoal = "<<total<<endl;
	*/
	system("pause");
}
int sum(const int t[][ROWS][COLS], int row)
{
	int total = 0;
	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < ROWS; k++)
		for (int j = 0; j < COLS; j++)
			total += (*t)[k][j];
		t++;
		//(*t)[0] += 2;
	}
	return total;
}
//void increase(int(**t)[COLS], int row) //int (*)[3][2]가 int (**)[2]와 호환되지 않음
void increase(int (*t)[ROWS][COLS], int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int k = 0; k < ROWS; k++)
		for (int j = 0; j < COLS; j++)
			(*t)[k][j] *= 2;
			t++;
	}
}
void displayArray(int(*a)[ROWS][COLS], int tiers)
{
	cout << endl << "use pointer-to-array" << endl;
	for (int g = 0; g < tiers; g++)
	{
		cout << endl << "tier = " << g << endl;
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				cout << "\t" << (*a)[i][j];
		a++;
	}
	cout << endl;
}

void displayArray(int*a) {
	for (int g = 0; g < TIERS; g++)
	{
		cout << endl << "tier = " << g << endl;
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				cout << "\t" << *a;
		a++;
	}
	cout << endl;
}

void displayArray(int(&a)[ROWS][COLS], int tiers) {
	int* b = a[0];
	for (int g = 0; g < tiers; g++)
	{
		cout << endl << "tier = " << g << endl;
		for (int i = 0; i < ROWS; i++)
			for (int j = 0; j < COLS; j++)
				cout << "\t" << *b;
		b++;
	}
	cout << endl;
}
int* addMatrix(int* a, int* b) {
	int* c;
	for (int i = 0; i < ROWS * COLS * TIERS; i++) {
		*c = *a + *b;
	}
	return c;
}

int* addMatrix(int(*a)[ROWS][COLS], int(*b)[ROWS][COLS]) {
	int* c;
	return c;
}

/*int& addMatrix(int(&a)[ROWS][COLS][TIERS], int(&b)[ROWS][COLS][TIERS]) {
	int* c;
	return &c;
}
*/

int get_data(int* p, const int a, const int b, const int c) {
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++) 
			for (int k = 0; k < c; k++) {
				*p = rand() % (a * b * c);
				p++;
			}
	return 1;
}

