#include <iostream>
using namespace std;
int main() {
	char a;

	cout << "문자를 입력하시오. ";
	cin >> a;

	if (a == 'O') cout << "정답입니다.\n프로그램을 종료합니다.\n";
	else cout << "프로그램을 종료합니다.\n";

	system("pause");
}
