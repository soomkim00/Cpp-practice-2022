//4-1. STREAM_IN_OUT.cpp  4.1 ���� scope�� ǥ�� �����
#include <iostream>
using namespace std;

class Person{
	/*
    ostream& operator<<(char); 
    ostream& operator<<(short);
    ostream& operator<<(int);
    ostream& operator<<(long);
    ostream& operator<<(float);
    ostream& operator<<(double);
   */
	friend ostream& operator<<(ostream& stream, const Person &p);
private:
    int idNum;
    int age;

public:
    Person() {}
    Person(int i, int a){ idNum = i, age = a; }

};

//�ּ� 1��
//* operator overloading ��뿹
ostream& operator<<(ostream& stream, const Person &p){
    stream<<"��������� "<<p.idNum<<"�̰�, ���̴�"<<p.age<<"��";
    return stream;
}
//*/
void main(){	
    Person p(941111,20);
    cout<<"����"<<p<<"�Դϴ�."<<endl<<endl; //error - �ּ�1�� �������� ������ ���� �߻��� Ȯ��

    Person s(981212, 30);
    cout << "����" << s << "�Դϴ�." << endl<<endl;
	system("pause");
}