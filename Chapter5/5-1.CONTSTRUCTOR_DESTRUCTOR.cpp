//5-1.CONSTRUCTOR_DESTRUCTOR.CPP     5.3.1 �����ڿ� �Ҹ��� 
#include <iostream>
using namespace std;

class Date{
    int month;
    int day;
    int year;
public:
	/*
    Date (int m, int d, int y):month (m), day (d), year (y){ }
	*/
    Date(){
       month = 1;
       day = 1;
       year = 1900;
    }
	//*/
    void showDate(){
        cout<<year<<"�� "<<month<<"�� "<<day<<"��"<<endl;
    }
    ~Date(){
        cout<<"�Ҹ��� ȣ��"<<endl;
    }
};
void main(){
	//�ּ� 1: default constructor�� ���, constructor() ��� �ּ� ó�� - compiler ����
/*
    Date date;//default ��
    date.showDate();     
*/
	//�ּ�2: constructor�� ��� -    Date(){} ����� ���
//*
    Date date1;
    date1.showDate();
//*/
    //�ּ�3
/* 
    Date date2(3, 1, 2017);
    date2.showDate();
*/ 
	system("pause");
}