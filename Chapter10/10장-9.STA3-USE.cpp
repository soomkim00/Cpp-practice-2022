// 10��-9.STA3-USE.CPP  10.4 template class
// Stack class�� �� ��ʸ� ���� ����
#include <iostream>
//#include "10��-7.Stack3.h" //������ ���� ���� Ȯ���غ��� �ǽ�
//header filer�� *.cpp�� �и����� �ʰ� header file �� ���ļ� �ذ��ϴ� ����� ����
#include "10��-8.STACK3.CPP" // Visual Studio���� template ���ÿ� cpp�� ���� include, header�� ������� �ʾƾ� ��
using namespace std;

void main(){
    // ���� stack�� ����
    Stack <int> intStack;
    Stack<float> floatStack;
    intStack.Push (500);
    intStack.Push (1992);
    floatStack.Push(500.123);
    floatStack.Push(1992.456);
    intStack.Push(33);
    intStack.Push(1024);
    floatStack.Push(33.789);
    floatStack.Push(1024.111);
    // stack���� �ϳ��� ���� �� push ������ ����� �ʿ䰡 ���� 
    cout << " ���� stack" << endl;
    while (! intStack.Empty ()){
            cout << intStack.Pop () << endl;
	}
    cout <<endl<< " �Ǽ� stack" << endl;
    while (!floatStack.Empty()) {
        cout << floatStack.Pop() << endl;
    }
	system("pause");
}