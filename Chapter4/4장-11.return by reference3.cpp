//4��-11 return by reference3.cpp   4.4.4 reference�� ���� �Լ� return ��
#include <iostream>
using namespace std;
int& sub(int a, int b);

void main(){
    int c = 1, d = 2;
    int &temp2 = sub(c,d);
	printf("&temp2 = %p, sub() = %p\n", &temp2, &sub(c, d));
	system("pause");
}
int& sub(int a, int b){
    int temp;
    temp = a+b;
	printf("&temp = %p\n", &temp);
    return temp;//local variable�� �ּҰ� return�Ǵ� ���� Ȯ�� - ���߿� stack���� ������� �־� ����
}
