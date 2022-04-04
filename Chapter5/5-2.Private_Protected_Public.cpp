//5-2.Private_Protected_Public.CPP  5.3.2 private, protected, 그리고 public
#include <iostream>
#include <string>
using namespace std;

class Test1{
private:
    int a;
    void T1_private(){
        cout << "T1_private()";
        cout << "a : " << a;
    }
protected:
    int b;
    void T1_protected(){
        cout << "T1_protected()";
        cout << "b : " << b;
    }
public:
    int c;
    void T1_public(){ 
        cout << "T1_public()";
        cout << "a : " << a << "   ";
        cout << "b : " << b << "   ";
        cout << "c : " << c << "   ";
    }
    void T1_public_private(){
        cout << "T1_public_private()";
        cout << "a : " << a << "   ";
        T1_private();
    }
    void T1_public_protected(){
        cout << "T1_public_protected()";
        cout << "b : " << b << "   ";
        T1_protected();
    }
    Test1(){
        a = 1; b = 2; c = 3;
    }
};
class Test2 : public Test1{
private:
    int d;
    void  T2_private(){
        cout << "T2_private()";
        cout << "d : " << d;
    }
public:
    int e;
    void T2_public(){
        cout << "T2_public()  "; 
        //cout << "a : " << a;
        cout << "b : " << b << "   ";
        cout << "c : " << c << "   ";
        cout << "d : " << d << "   ";
        cout << "e : " << e << "   ";
    }
    void T2_public_private(){ 
        cout << "T2_public_private()";
        cout << "d : " << d << "   ";
        T2_private();
    }
    void T2_public_protected(){ 
        cout << "T2_public_protected()";
        cout << "b : " << b << "   ";
        T1_protected();
    }
    Test2(){
        d = 4; e = 5;
    }
};
void main(){
    Test1 t1;
    Test2 t2;

    // 1번 주석
	/*
    cout << "1번 주석" << endl;
    //cout << "t1.a : " << t1.a << endl;
    //cout << "t1.b : " << t1.b << endl; 
    cout << "t1.c : " << t1.c << endl;
    //cout << "t2.a : "  << t2.a << endl;
    //cout << "t2.b : "  << t2.b << endl; 
    cout << "t2.c : " << t2.c << endl;
    //cout << "t2.d : " << t2.d << endl;
    cout << "t2.e : " << t2.e << endl << endl;
	*/

    // 2번 주석
	/*
    cout << "2번 주석" << endl;
    //t1.T1_private(); 
    t1.T1_public_private(); 
    cout << endl;
    //t2.T2_private();
    t2.T2_public_private();
    cout << endl << endl;
	*/

    // 3번 주석
/*
    cout << "3번 주석" << endl;
    //t1.T1_protected(); 
    t1.T1_public_protected();
    cout << endl;
    t2.T2_public_protected();
    cout << endl << endl;
*/

    // 4번 주석
/*
    cout << "4번 주석" << endl; 
    t1.T1_public();
    cout << endl;
    t2.T2_public();
    cout << endl;
*/
    system("pause");
}