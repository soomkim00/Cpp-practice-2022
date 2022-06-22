// 11-1.BASIC3.CPP 11.3 예외 처리와 교정
/*
 1) 내용
  본 source code는 error로 인해 발생된 예외적인 상황이나 비정상적인 상황을 다루는 방법을 나눗셈 연산을 통해서 알아보는 것이다.
 2) 방법
  가. main()과 divideCheck()의 try, catch문이 어떤 예외의 경우들로 이루어져있는지 확인해보자.
  나. divide()의 결과에 따라 divideCheck()와 main()에서 어떤 구문을 수행하는지 확인해보자.
  다. 다양한 경우의 정수 타입 데이터를 입력하여 출력 결과를 확인해보자.
*/
#include <iostream>
using namespace std;

class ZeroDenominator{};
class ZeroDivision{};
class CloseFunction{};

class Negative{
public:
    int* pValue;
    Negative (int* pn):
        pValue(pn){}
};

int divide(int& num1, int& num2){
    if(num1 == 0){
        if (num2 == 0)
            throw CloseFunction();//catch하는 것을 파악
        else
            throw ZeroDenominator();//catch하는 문장은?
    }
    if(num2 == 0)
        throw ZeroDivision();	
    if(num1 < 0)
        throw Negative(&num1);
    if(num2 < 0)
        throw Negative(&num2);
    return (num1/num2);
}

int divideCheck(int& num1, int& num2){
    int num;
    try{
        num = divide(num1, num2);
    }
    catch(Negative neg){
        //부호를 바꿈
        *neg.pValue = - *neg.pValue;
        //사용자에게 경고
        cout<< "A number was negative... reversing it to positive" 
             << endl; 
        //다시 시도
        num = divideCheck(num1, num2);
    }
    return num;
}

void main(){
    int num1, num2;
    int flag = 1;
    cout << "This is a dividing machine for positive integers!" 
          << endl << "(Input 0 0 value to end)" << endl << endl;
    while(flag == 1){
        cout<< "Input two values: ";
        cin >> num1 >> num2;
        try{
            int num3 = divideCheck(num1, num2);
            cout<< num1 << " / " << num2 << " = " << num3 << endl;
        }
        catch(CloseFunction){
            cout << "A dividing machine will be closd" << endl;
            flag = 0;
        }
        catch(ZeroDenominator){
            cout << "ERROR: Denominator is 0" << endl;
        }
        catch(ZeroDivision){
            cout << "ERROR: Division by 0" << endl;
        }
        catch(Negative neg){
            //예외상황 발생
            cout<< "Ouch!" << endl;
            throw; 
        }
    }
    system("pause");
}