//2-11. ragged.cpp
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 
void raggedTable();
void raggedTable2();

int main(){
	int **T1;
	//1�� �ּ�
	
	T1 = (int**)malloc(32);//2019 ������ pointer�� ���̰� 8����Ʈ
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
	printf("T1[][]�� ���� ��\n");
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

	//2�� �ּ�
	//*
	raggedTable();


	//*/
	//3�� �ּ�
	//�迭���� �̿��Ͽ� ���� ���̰� �ٸ� �迭�� ���ҿ� �����ϴ� ���
	// raggedTable2() ȣ�� �ۼ� �κ�
	//raggedTable2();
	
	system("pause");
	return 0;
}


void raggedTable() {
	int **T2;
	int row, col;
	int rowIndex;
	printf("���� ���� �Է��ϼ���:");
	scanf_s("%d", &row);
	//calloc(�Ҵ�� ������ ����, �Ҵ�� ������ ũ��)
	T2 = (int **)calloc(row, sizeof(int*)); 
	for (rowIndex = 0; rowIndex < row; rowIndex++) {
		printf("%d�� ���� ���� �Է��ϼ���:",rowIndex);
		scanf("%d", &col);
		T2[rowIndex] = (int *)calloc(col+1, sizeof(int));
		//�� ���� ù ���� ���� ���� ����
		T2[rowIndex][0] = col; 
		// raggedTable�� ġȯ�ϴ� ������ �ǽ� �ڵ�� �߰�
	}

	// �����Ҵ� ���� 2���� �迭�� ��� 1���� �迭�� ���� ������ �� ���������͸� �����ؾ� ��.
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
	//�߰� �ۼ��� �ڵ�
	return;
}