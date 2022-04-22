#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int min;

	cout << "첫 번째 숫자를 입력하시오. ";
	cin >> a;
	cout << "두 번째 숫자를 입력하시오. ";
	cin >> b;
	cout << "세 번째 숫자를 입력하시오. ";
	cin >> c;

	if (a < b) {
		if (a < c) min = a;
		else min = c;
	}
	else {
		if (b < c) min = b;
		else min = c;
	}
	
	cout << "최소값 : " << min << endl;

	system("pause");
}
