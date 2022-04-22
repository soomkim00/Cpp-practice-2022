#include <iostream>
using namespace std;

int main() {
	int a;
	int count = 0;
	cout << "1 ~ 99 사이의 정수를 입력하시오 >> ";
	cin >> a;
	if ((a / 10) % 3 == 0) count++;
	if ((a % 10) % 3 == 0) count++;

	if (count == 1) cout << "박수짝" << endl;
	if (count == 2) cout << "박수짝짝" << endl;

	system("pause");
}
