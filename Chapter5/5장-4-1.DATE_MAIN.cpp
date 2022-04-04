// 5장-4-1.DATE_MAIN.CPP   5.3.3 class의 interface와 body 

#include "5장-3.DATE2.h"
#include <stdlib.h>

void main(){
    Date newYearsDay (1,1,2017);

    newYearsDay.PrintDate ();
    newYearsDay.IncreaseDate ();                                 
    newYearsDay.PrintDate ();	
    newYearsDay.PrintLeap ();

    Date d (5,15,2016);

    d.IncreaseDate ();
    d.PrintDate ();
    d.PrintLeap ();

    for (Date dd(2,25,2017); dd.Day()<3||dd.Day()>10; dd.IncreaseDate())
		dd.PrintDate ();
	system("pause");
}