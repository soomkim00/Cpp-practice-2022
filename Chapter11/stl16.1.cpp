// str1.cpp -- introducing the string class
#include <iostream>
#include <string>
// using string constructors

int main()
{
    using namespace std;
    string one("Lottery Winner!");     // ctor #1: string(const char * s)
    cout << one << endl;               // overloaded <<
    string two(20, '$');               // ctor #2: string(size_type n, char c)
    cout << two << endl;
    string three(one);                 // ctor #3: copy constructor
    cout << three << endl;
    one += " Oops!";                   // overloaded +=
    cout << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';//the overloaded [] operator
    string four;                       // ctor #4: A default constructor
    four = two + three;                // overloaded +, =
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls, 20);              // ctor #5: takes a C-style string and an integer as arguments
    cout << five << "!\n";
    string six(alls + 6, alls + 10);     // ctor #6: template<class Iter> string(Iter begin, Iter end);
    cout << six << ", ";
    string seven(&five[6], &five[10]); // ctor #6 again
    cout << seven << "...\n";
    string eight(four, 7, 16);         // ctor #7: string(const string & str, size_type pos, size_type n = npos)
    cout << eight << " in motion!" << endl;
    // std::cin.get();
    one += two;
    one += '!';
    two = one;
    two = '?';
    return 0;
}
