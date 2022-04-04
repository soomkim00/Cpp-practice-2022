//5장-6-1.Letters.h   5.5 class 데이터와 class 함수
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
		//cout << ch;//오류 확인 필요
        return num;
    }
};