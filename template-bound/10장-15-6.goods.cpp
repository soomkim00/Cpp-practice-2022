//10��-15-6.Goods.cpp [PRATA2005] 10.4.3 template�� �̿��� Container class ǥ��
//template class with non-template friends
#include <iostream>
using namespace std;

template <typename TT>
class Goods
{
private:
	TT item;
	static int counter;
public:
	Goods(const TT& i) : item(i) { counter++; }
	~Goods() { counter--; }
	friend void showCounter();//non-template friends
	friend void display(Goods<TT>&);//non-template friends with template parameter
};

template <typename T>
int Goods<T>::counter = 0;

//non-template friend to all Goods<T> classes
void showCounter()
{
	cout << "showCounter():Goods<int>::counter = " << Goods<int>::counter << endl;
	cout << "showCounter():Goods<double>::counter = " << Goods<double>::counter << endl;
}
//non-template friends with specialized template parameter
void display(Goods<int>& x)
{
	cout << "Goods<int>: T item = " << x.item << endl;
}
//non-template friends with specialized template parameter
void display(Goods < double >& x)
{
	cout << "Goods<double>: T item = " << x.item << endl;
}
int main()
{
	//showCounter();
	Goods<int> gi1(33);
	Goods<int> gi2(99);
	Goods<double> gd(11.1);
	display(gi1);
	display(gi2);
	display(gd);
	showCounter();
	showCounter();
	system("pause");
	return 0;
}

