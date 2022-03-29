//4��-12. Cascade.cpp   4.4.4 reference�� ���� �Լ� return ��
// return by reference�� �������� ��ʷμ� 6�� ���� �н��� �ֿ� ���
//4�忡���� �ܼ� �����Ͽ� ���� ������ �ǽ���
#include <iostream>

using namespace std;
class Cascade{ 
private:
	float real;
	float image; 
public:
	Cascade() { real = 0.0; image = 0.0; }
	Cascade(float r, float i) : real(r), image(i) { }
	void OutCascade() const { cout<<real<<" + "<<image<<"i"<<endl; }
	Cascade& operator +(const Cascade &T);

};
/*
Cascade& Cascade::operator+(const Cascade &T){
	this->image = this->image + T.image;
	this->real = this->real + T.real; 
	this->OutCascade();
	return *this;
}
*/
//*
// ���� �ڵ�� ���� ������ �ִ� �ڵ��� - �����Ͽ� ���� wrong�� ���� Ȯ��
    Cascade& Cascade::operator +(const Cascade& T) {
	Cascade C;
	C.image = image + T.image;
	C.real = real + T.real;
	C.OutCascade();
	return C;//return local variable?
}
//*/
void main(void){
	Cascade C1(1.1,2.2);
	Cascade C2(3.3,4.4);
	Cascade C3(5.5,6.6); 
	Cascade C4;
	C4 = C1 + C2 + C3;
	system("pause");
}