// 5��-3.DATE2.H   5.3.3 class�� interface�� body 

class Date{
    // private ������
    int month;
    int day;
    int year;

public:
    Date (int m, int d, int y);
    Date ();
    Date (class Date d, int nn);

    int Day ();
    int Month ();
    int Year ();

    int LeapYear ();
    int DaysInMonth ();
	void IncreaseDate ();

    void PrintDate ();
    void PrintLeap ();
};