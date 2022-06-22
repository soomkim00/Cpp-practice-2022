//10장-15-1.Stack_string.cpp [PRATA2005] 10.4.3 template을 이용한 Container class 표현
/*
header file을 사용하지 않고 하나의 file로 저장시에 link error 없음
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
#define Num 10
#define SIZE 100
template <class T>
class Stack
{
private:
	int nElements;
	T * data;
	int top; 
public:
	Stack(int s = SIZE);
	~Stack() { delete[] data; }
	bool Empty() { return top == 0; }
	bool Full() { return top == nElements; }
	bool push(const T & item);
	bool pop(T & item); 
};
template <class T>
Stack<T>::Stack(int s = SIZE) : nElements(s), top(0)
{
	data = new T[nElements];
}

template <class T>
bool Stack<T>::push(const T & item)
{
	if (top < nElements)
	{
	   cout << "Stack::push() = " << item << endl;
	   data[top++] = item;
	   return true;
	}
	else
	   return false;
}
 
template <class T>
bool Stack<T>::pop(T & item)
{
	if (top > 0)
	{
	   item = data[--top];
	   return true;
	}
	else
	   return false;
}


int main()
{
	cout << "Please enter stack size: ";
	int n;
	cin >> n;

	Stack<const char *> st(n);
	//Stack<Person> st(n);//Person class를 만들어 실습
	/*
		Recording* R[20], foundRecord;

	R[0] = new Recording("LON", "2312", "Romeo and Juliet", "Prokofiev", "Maazel");
	R[1] = new Recording("RCA", "2626", "Quartet in C Sharp Minor", "Beethoven", "Julliard");
	R[2] = new Recording("WAR", "23699", "Touchstone", "Corea", "Corea");
	R[3] = new Recording("ANG", "3795", "Symphony No. 9", "Beethoven", "Giulini");
	R[4] = new Recording("COL", "38358", "Nebraska", "Springsteen", "Springsteen");
	R[5] = new Recording("DG", "18807", "Symphony No. 9", "Beethoven", "Karajan");
	R[6] = new Recording("MER", "75016", "Coq d'or Suite", "Rimsky-Korsakov", "Leinsdorf");
	R[7] = new Recording("COL", "31809", "Symphony No. 9", "Dvorak", "Bernstein");
	R[8] = new Recording("DG", "139201", "Violin Concerto", "Beethoven", "Ferras");
	R[9] = new Recording("FF", "245", "Good News", "Sweet Honey in the Rock", "Sweet Honey in the Rock");
	R[10] = new Recording("1LON", "2312", "Romeo and Juliet", "Prokofiev", "Maazel");
	R[11] = new Recording("1RCA", "2626", "Quartet in C Sharp Minor", "Beethoven", "Julliard");
	R[12] = new Recording("1WAR", "23699", "Touchstone", "Corea", "Corea");
	R[13] = new Recording("1ANG", "3795", "Symphony No. 9", "Beethoven", "Giulini");
	R[14] = new Recording("1COL", "38358", "Nebraska", "Springsteen", "Springsteen");
	R[15] = new Recording("1DG", "18807", "Symphony No. 9", "Beethoven", "Karajan");
	R[16] = new Recording("1MER", "75016", "Coq d'or Suite", "Rimsky-Korsakov", "Leinsdorf");
	R[17] = new Recording("1COL", "31809", "Symphony No. 9", "Dvorak", "Bernstein");
	R[18] = new Recording("1DG", "139201", "Violin Concerto", "Beethoven", "Ferras");
	R[19] = new Recording("1FF", "245", "Good News", "Sweet Honey in the Rock", "Sweet Honey in the Rock");
	for (int i = 0; i < 10; i++)
	{
		st.push(R[i]);
	}
		for (int i = 0; i < 10; i++)
	{
		st.pop(item]);
		cout<<item;
	}
	
	
	*/
	const char * fish[Num] = {
	"Cod", "Tuna", "squid", "octopus", "mackeral", "eel",
	"salmon", "carp", "sea bass", "trout"
	};
	const char * food[Num];
	int i = 0;
	int j = 0;
	while (i < Num)
	{
	   if (st.Empty())
	      st.push(fish[j++]);
	   else if (st.Full())
	      st.pop(food[i++]);
	   else if (j < Num)
	      st.push(fish[j++]);
	   else
	      st.pop(food[i++]);
	}
	for (int i = 0; i < Num; i++)
	   std::cout << food[i] << std::endl;
	cout << "Bye\n";
	system("pause");
	return 0;
}