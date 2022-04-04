//5-1.CONSTRUCTOR_DESTRUCTOR.CPP     5.3.1 생성자와 소멸자 
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
        cout<<year<<"년 "<<month<<"월 "<<day<<"일"<<endl;
    }
    ~Date(){
        cout<<"소멸자 호출"<<endl;
    }
};
void main(){
	//주석 1: default constructor를 사용, constructor() 모두 주석 처리 - compiler 제공
/*
    Date date;//default 값
    date.showDate();     
*/
	//주석2: constructor를 사용 -    Date(){} 사용한 경우
//*
    Date date1;
    date1.showDate();
//*/
    //주석3
/* 
    Date date2(3, 1, 2017);
    date2.showDate();
*/ 
	system("pause");
}