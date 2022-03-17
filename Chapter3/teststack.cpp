// stacker.cpp -- testing the Stack class

#include <iostream>
#include "stack.h"
int main(void)
{
    using namespace std;
    Stack st; // create an empty stack
    Element inputdata, outputdata;
    cout << "입력값:" << endl;
    while (st.isfull())
    {
        cin >> inputdata;
        st.push(inputdata);
    }
    cout << "stack pop 값:" << endl;
    while (st.isempty())
    {
        st.pop(outputdata);
        cout << outputdata;
    }
    cout << "Bye\n";
    system("pause");
    return 0;
}
