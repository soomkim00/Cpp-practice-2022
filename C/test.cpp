#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int min;

	cout << "ù ��° ���ڸ� �Է��Ͻÿ�. ";
	cin >> a;
	cout << "�� ��° ���ڸ� �Է��Ͻÿ�. ";
	cin >> b;
	cout << "�� ��° ���ڸ� �Է��Ͻÿ�. ";
	cin >> c;

	if (a < b) {
		if (a < c) min = a;
		else min = c;
	}
	else {
		if (b < c) min = b;
		else min = c;
	}
	
	cout << "�ּҰ� : " << min << endl;

	system("pause");
}
