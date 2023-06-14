#include <iostream>
using namespace std;


int calCenture(int year){
    int centure = year-1;
    centure = centure/100;
    centure = centure/4;
    // if centure = 1 make it 5
    // if centure = 2 make it 3
    // if centure = 3 make it 1
    // if centure = 0 make it 0
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

    default:
        break;
    }
    return centure;
}

int main(int argc, char const *argv[])
{
    int date, month , year;
    cout << "Enter in dd/mm/yy formate: ";
    cin >> date >> month >> year;
    int oddDaysForDate, oddDaysForMonth, oddDaysForYear=0;
    // calculus part started;
    
// for odd days in a year;

    // "centure" + "year"-1;
    int centure, year = -1;
    centure = year/100;
    centure = centure/4;
    // if centure = 1 make it 5
    // if centure = 2 make it 3
    // if centure = 3 make it 1
    // if centure = 0 make it 0
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

    default:
        break;
    }
    
    // CALCULATE THE YEAR #XXYY yy is the two bit for the cal;

    int xxyy = year % 100;
    while ((xxyy % 4) != 0)
    {
        xxyy--;
    }
    int xxyy2 = xxyy/4;
    int xxyy1 = xxyy - xxyy2;
    xxyy2 *=2;
    int oddxxyy = xxyy1 + xxyy2;

    



    return 0;
}
