// 10��-11.TEMPCOMP.CPP   10.4.1 Ÿ�� ȣȯ�� ����
// template ȣȯ�� ��Ģ�� �����ִ� program
// �ϳ��� ��Ҹ� �����ϴ� �ܼ� template class�� ����
#include <iostream>
using namespace std;
template <class T> class Single{
    T data;

public:
    Single (int n): data(n)
    { }

    void Set (T el){
        data = el;
    }
    T Get (){
        return data;
    }
} ;

void main(){
    // � template class�� instance Ÿ���� ����
    Single <int> oneInt(10);
    oneInt.Set (5);
    Single <float> oneFloat(1.123);
    oneFloat.Set (4.9);
    Single <int> secondInt(33);
    secondInt.Set (8);
    // template class�� instance�� ���� ġȯ�� Ÿ�� ȣȯ�̸� �����ϴ�
    // �ùٸ���
    cout << oneInt.Get() << endl;
    oneInt = secondInt;
    cout << oneInt.Get() << endl;
    // Ʋ����
    //oneInt = oneFloat; //�ٸ� type
	system("pause");
}