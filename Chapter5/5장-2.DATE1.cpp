// 5장-2.DATE1.CPP   5.3 class
#include <iostream>
#include "5장-1.DATE1.h"

void main(){
    Date newYearsDay (1,1,2017);
   // Date dx;
    newYearsDay.PrintDate ();
    newYearsDay.IncreaseDate ();                                 
    newYearsDay.PrintDate ();	
    newYearsDay.PrintLeap ();

    Date d (5,15,2016);
    //d.day++;
    d.IncreaseDate ();
    d.PrintDate ();
    d.PrintLeap ();
    Date dy(13, 35, -1212);
    dy.PrintDate();//논리 오류 일자가 입력됨
    for (Date dd(2,25,2017); dd.Day()<3||dd.Day()>10; dd.IncreaseDate())
		dd.PrintDate ();
	system("pause");
}