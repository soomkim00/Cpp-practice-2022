#include <iostream>
using namespace std;

int main() {
	int a;
	int count = 0;
	cout << "1 ~ 99 ������ ������ �Է��Ͻÿ� >> ";
	cin >> a;
	if ((a / 10) % 3 == 0) count++;
	if ((a % 10) % 3 == 0) count++;

	if (count == 1) cout << "�ڼ�¦" << endl;
	if (count == 2) cout << "�ڼ�¦¦" << endl;

	system("pause");
}
