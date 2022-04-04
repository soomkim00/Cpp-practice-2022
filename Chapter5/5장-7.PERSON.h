// 5¿Â-7.PERSON.H   5.6 class queue

//#include <cstring>
#include <string>
#include <iostream>
using namespace std;

class Person{
    string name;
	
public:
    Person (string n) :
    name (n){} 

    Person () : name (string()) {}

    string Name (){
        return name;
    }
};