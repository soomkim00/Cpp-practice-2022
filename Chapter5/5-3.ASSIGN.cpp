//5-3.ASSIGN.CPP [Folk,Zoellick, Riccardi, 1998]  5.3.5 ��ü�� �����ϰ� ����ϴ� ��� 
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
    cout<<"[default ������ ȣ��]"<<endl;
	string = new char [10];
}

String::String(char* _string){
    cout<<"[parameter�� �ִ� ������ ȣ��]"<<endl;
    string = new char[strlen(_string)+1];
    strcpy_s(string, strlen(_string)+1, _string);
}

String::String(const String& str){
    cout<<"[���� ������ ȣ��]"<<endl;
    string = new char[strlen(str.string)+1];
    strcpy_s(string,strlen(str.string)+1, str.string);
}
//�ּ� 3��
//*
String & String:: operator = (const String & str){
    cout<<"[�������� assign �Լ�ȣ��]"<<endl;
    string = new char[strlen(str.string)+1];
    strcpy_s(string, strlen(str.string)+1,str.string);
    return *this;
}
//*/
String::~String(){ 
    cout<<"[�Ҹ��� ȣ��]"<<endl;
    delete []string;
}

void main(){
    //1�� �ּ� 
    //*
    String s1;
    cout << "\ts1��string��" << s1.string << "�̴�." <<endl;

    String s2("Programming");
    cout << " s2�� string�� " << &s2.string << "�̴�." <<endl<<endl;

    String s3(s2); 
    cout << " s3�� string�� " << &s3.string << "�̴�." <<endl<<endl;
    //*/

    //2�� �ּ�
   //*
    s1 = s2; 
    cout << " s1�� string�� " << s1.string << "�̴�." <<endl<<endl;	
	cout << " s2�� string�� " << s2.string << "�̴�." << endl << endl;
    cout<<"[s2, s3�� string member������ ���� ������]"<<endl;
    char *str1 = "Database";
    char *str2 = "FileSystem";
    strcpy_s (s2.string, strlen(str1)+1, str1);
    strcpy_s (s3.string, strlen(str2)+1, str2);
    cout << " s1�� string�� " << s1.string << "�̴�." <<endl;
    cout << " s2�� string�� " << s2.string << "�̴�." <<endl;
    cout << " s3�� string�� " << s3.string << "�̴�." <<endl<<endl;
    //*/
	system("pause");
}