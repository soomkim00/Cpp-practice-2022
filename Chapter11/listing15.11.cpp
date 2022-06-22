//error4.cpp – using exception classes
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include "exc_mean.h"
// function prototypes
double hmean(double a, double b);
double gmean(double a, double b);
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	double x, y, z;
	cout << "Enter two numbers: ";
	while (cin >> x >> y)
	{
		try { // start of try block
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y
				<< " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y
				<< " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers <q to quit>: ";
		}// end of try block
		catch (bad_hmean& bg) // start of catch block
		{
			bg.mesg();
			cout << "Try again.\n";
			continue;
		}
		catch (bad_gmean& hg)
		{
			cout << hg.mesg();
			cout << "Values used: " << hg.v1 << ", "
				<< hg.v2 << endl;
			cout << "Sorry, you don't get to play any more.\n";
			break;
		} // end of catch block
	}
	cout << "Bye!\n";
	system("pause");
	return 0;
}
double hmean(double a, double b)//조화평균: 역수의 산술 평균의 역수 > (1/a + 1/b)/2의 역수
{
	if (a == -b)
		throw bad_hmean(a, b);
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)//기하 평균: n개의 양수 값을 모두 곱한 값을 n 제곱근한 값
{
	if (a < 0 || b < 0)
		throw bad_gmean(a, b);
	return std::sqrt(a * b);
}
