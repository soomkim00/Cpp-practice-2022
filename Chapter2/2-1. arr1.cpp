//2-1. arr1.cpp
/*
실습 1
1) 내용
	본 source code는 배열과 pointer의 관계를 파악하기 위한 예제이다.
2) 방법
	가. program을 실행시켜 결과 값을 통해 배열과 pointer의 관계를 이해해보자.
*/
#include <stdio.h>
#include <stdlib.h>
void main() {
	int odd[5] = { 3, 5, 7, 9, 11 };
	printf("&odd[0] = %p\n", &odd[0]);
	printf("odd = %p\n", odd);
	printf("odd+1 = %p\n", odd + 1);
	printf("odd[0] = %d\n", odd[0]);
	printf("*odd = %d\n", *odd);
	printf("*odd+1 = %d\n", *odd + 1);
	printf("*(odd+1) = %d\n", *(odd + 1));
	system("pause");
}