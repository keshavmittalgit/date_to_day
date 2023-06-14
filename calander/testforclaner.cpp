#include <iostream>
using namespace std;

// test passed;
int calCenture(int year){
    int centure = year-1;
    centure = centure / 100;
    centure = centure%4;
    switch (centure)
    {
    case 1:
        centure = 5;
        break;
    case 2:
        centure = 3;
        break;
    case 3:
        centure = 1;
        break;
    }
    return centure;
}

// test passed;
int calYear(int year){
    year -=1;
   int lasttwobits = year%100;
   int xx = lasttwobits;
   while ((xx%4) != 0)
   {
        xx--; 
   }
   int leepyear = xx/4;
   int nonleepyear = lasttwobits - leepyear;
   int totaldays = (leepyear*2)+nonleepyear;
   int odddays = totaldays%7;
   return odddays; 
}

int calDDmm(int date, int month, int year){
    int feb;
    int totalDays;
    if(year%4 == 0){
        feb = 29;
    }else feb = 28;
    switch (month)
    {
    case 1:
        totalDays = date;
        break;
    case 2:
        totalDays = feb + date;
        break;
    case 3:
        totalDays = 31 + feb + date;
        break;
    case 4:
        totalDays = (31*2) + feb + date;
        break;
    case 5:
        totalDays = (31*2) + 30 + feb + date;
        break;
    case 6:
        totalDays = (31*3) + 30 + feb + date;
        break;
    case 7:
        totalDays = (31*3) + (30*2) + feb + date;
        break;
    case 8:
        totalDays = (31*4) + (30*2) + feb + date;
        break;
    case 9:
        totalDays = (31*5) + (30*2) + feb + date;
        break;
    case 10:
        totalDays = (31*5) + (30*3) + feb + date;
        break;
    case 11:
        totalDays = (31*6) + (30*3) + feb + date;
        break;
    case 12:
        totalDays = (31*6) + (30*4) + feb + date;
        break;
    default:
        break;
    }
    
    totalDays = totalDays % 7;

    return totalDays;

}
void calDateToDay(int dd, int mm, int yy){
    int oddDays = calDDmm(dd, mm, yy);
    int oddYear = calYear(yy);
    int oddCenture = calCenture(yy);
    int index = (oddCenture + oddDays + oddYear)%7;
    
    switch (index)
    {
    case 0:
        cout << "Sunday" << endl;
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Webnesday" << endl;
        break;
    case 4: 
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    }
    

}
int main()
{
    int date, month, year;
    cout << "Enter your birth date: ";
    cin >> date >> month >> year;
    cout << "Your were born on ";
    calDateToDay(date, month, year);
    return 0;
} 