//5��-6-1.Letters.h   5.5 class �����Ϳ� class �Լ�
using namespace std;
class Letters {
private:
    char ch;//private data member can be accessed within member functions
    static int num;
public:
    Letters (char c);
    ~Letters ();
    char Value ();
    static int Number (){
		//cout << ch;//���� Ȯ�� �ʿ�
        return num;
    }
};