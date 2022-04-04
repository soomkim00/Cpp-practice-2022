//5-3.ASSIGN.CPP [Folk,Zoellick, Riccardi, 1998]  5.3.5 객체를 생성하고 사용하는 방법 
#include<iostream>
#include<string>
using namespace std;

class String{
public:
    String ();
    String (const String&);
    String & operator = (const String &); 
     String (char* );
    ~String (); 
    char * string;
};	

String::String(){
    cout<<"[default 생성자 호출]"<<endl;
	string = new char [10];
}

String::String(char* _string){
    cout<<"[parameter가 있는 생성자 호출]"<<endl;
    string = new char[strlen(_string)+1];
    strcpy_s(string, strlen(_string)+1, _string);
}

String::String(const String& str){
    cout<<"[복사 생성자 호출]"<<endl;
    string = new char[strlen(str.string)+1];
    strcpy_s(string,strlen(str.string)+1, str.string);
}
//주석 3번
//*
String & String:: operator = (const String & str){
    cout<<"[재정의한 assign 함수호출]"<<endl;
    string = new char[strlen(str.string)+1];
    strcpy_s(string, strlen(str.string)+1,str.string);
    return *this;
}
//*/
String::~String(){ 
    cout<<"[소멸자 호출]"<<endl;
    delete []string;
}

void main(){
    //1번 주석 
    //*
    String s1;
    cout << "\ts1의string은" << s1.string << "이다." <<endl;

    String s2("Programming");
    cout << " s2의 string은 " << &s2.string << "이다." <<endl<<endl;

    String s3(s2); 
    cout << " s3의 string은 " << &s3.string << "이다." <<endl<<endl;
    //*/

    //2번 주석
   //*
    s1 = s2; 
    cout << " s1의 string은 " << s1.string << "이다." <<endl<<endl;	
	cout << " s2의 string은 " << s2.string << "이다." << endl << endl;
    cout<<"[s2, s3의 string member변수의 값을 변경함]"<<endl;
    char *str1 = "Database";
    char *str2 = "FileSystem";
    strcpy_s (s2.string, strlen(str1)+1, str1);
    strcpy_s (s3.string, strlen(str2)+1, str2);
    cout << " s1의 string은 " << s1.string << "이다." <<endl;
    cout << " s2의 string은 " << s2.string << "이다." <<endl;
    cout << " s3의 string은 " << s3.string << "이다." <<endl<<endl;
    //*/
	system("pause");
}