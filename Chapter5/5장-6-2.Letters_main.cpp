//5장-6-2 Letters_main.cpp   5.5 class 데이터와 class 함수
#include "5장-6-1.Letters.h"
#include <iostream>
using namespace std;
# include <stdlib.h>
int Letters :: num = 0;//private member이나 초기화 사용

void main(){
    cout << "Program begins..." << endl;
    cout << "Number of letters at the beginning: "
          <<  Letters::Number() << endl;
	//cout << Letters::num;
    Letters A ('a');
    Letters B ('b');
    Letters C ('c');
    Letters D ('d');
	//cout << A.num;
    cout << "Number of letters after declarations: "
          <<  A.Number() << endl;
  
    cout << endl;
    cout << "Entering a new block..." << endl;
    {
        Letters E ('e');
        Letters *pF;
        pF = new Letters ('f');
       cout << "Total number of letters inside the block: "<<  A.Number() << endl;
        cout << endl;
        cout << "Leaving the block..." << endl;
    }
   
    cout << endl;
    cout << "Total number of letters after the block: "
          <<  Letters::Number() << endl;
	system("pause");
}