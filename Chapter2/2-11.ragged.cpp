//2-11. ragged.cpp
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
void raggedTable();
void raggedTable2();

int main(){
	int **T1;
	//1번 주석
	
	T1 = (int**)malloc(32);//2019 버젼은 pointer의 길이가 8바이트
	//T1 = (int**)malloc(16);
	T1[0] = (int*)malloc(4);
	//*T1 = (int*)malloc(4);
	T1[1] = (int*)malloc(8);
	//*(T1+1) = (int*)malloc(8);
	T1[2] = (int*)malloc(12);
	T1[3] = (int*)malloc(16);
	printf("\nsize of T1 = %d, T1[0]= %d\n", sizeof T1, sizeof T1[0]);
	printf("\n size of pointer of T1 = %d\n", sizeof(T1));
	printf("T1 = %p, T1[1] = %p, &T1[1] = %p\n", T1, T1+1, &T1[1]);

	T1[0][0]=0;
	T1[1][0]=1; T1[1][1]=2;
	T1[2][0]=3; T1[2][1]=4; T1[2][2]=5;
	T1[3][0]=6; T1[3][1]=7; T1[3][2]=8; T1[3][3]=9;
	
	int cnt = 1;
	printf("T1[][]의 원소 값\n");
	for(int i=0; i<4; i++){
		for(int j=0;j<cnt; j++){
			printf("%d ",T1[i][j]);
		}
		printf("\n");
		cnt++;
	}
	printf("\n");
	//T11[0][0]
	printf("**T1 = %d\n", **T1);
	//T1[1][0]
	printf("**(T1+1) = %d\n", **(T1 + 1));
	//T1[1][1]
	printf("*(*(T1+1)+1) = %d\n", *(*(T1 + 1) + 1));
	
	
	//*
	for (int i = 0; i < 4; i++)
	{
		free(T1[i]);
	}
	//*/

	free(T1);

	//2번 주석
	//*
	raggedTable();


	//*/
	//3번 주석
	//배열명을 이용하여 열의 길이가 다른 배열의 원소에 접근하는 방법
	// raggedTable2() 호출 작성 부분
	//raggedTable2();
	
	system("pause");
	return 0;
}


void raggedTable() {
	int **T2;
	int row, col;
	int rowIndex;
	printf("행의 수를 입력하세요:");
	scanf_s("%d", &row);
	//calloc(할당된 원소의 개수, 할당된 원소의 크기)
	T2 = (int **)calloc(row, sizeof(int*)); 
	for (rowIndex = 0; rowIndex < row; rowIndex++) {
		printf("%d행 열의 수를 입력하세요:",rowIndex);
		scanf("%d", &col);
		T2[rowIndex] = (int *)calloc(col+1, sizeof(int));
		//각 행의 첫 열에 열의 개수 저장
		T2[rowIndex][0] = col; 
		// raggedTable에 치환하는 문장을 실습 코드로 추가
	}

	// 동적할당 받은 2차원 배열의 경우 1차원 배열을 먼저 해제한 후 더블포인터를 해제해야 함.
	/*
	for (rowIndex = 0; rowIndex < row; rowIndex++)
	{
		free(T2[rowIndex]);
	}
	free(T2);
	*/
	return;
}
void raggedTable2() {
	int row, col;
	int rowIndex;
	//추가 작성할 코드
	return;
}