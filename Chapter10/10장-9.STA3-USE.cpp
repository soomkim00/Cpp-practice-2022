// 10장-9.STA3-USE.CPP  10.4 template class
// Stack class의 한 사례를 만든 예제
#include <iostream>
//#include "10장-7.Stack3.h" //오류가 나는 것을 확인해보는 실습
//header filer과 *.cpp를 분리하지 않고 header file 로 합쳐서 해결하는 방법도 가능
#include "10장-8.STACK3.CPP" // Visual Studio에서 template 사용시에 cpp를 먼저 include, header를 사용하지 않아야 함
using namespace std;

void main(){
    // 정수 stack의 정의
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
    // stack에서 하나씩 꺼낼 때 push 순서를 기억할 필요가 없다 
    cout << " 정수 stack" << endl;
    while (! intStack.Empty ()){
            cout << intStack.Pop () << endl;
	}
    cout <<endl<< " 실수 stack" << endl;
    while (!floatStack.Empty()) {
        cout << floatStack.Pop() << endl;
    }
	system("pause");
}