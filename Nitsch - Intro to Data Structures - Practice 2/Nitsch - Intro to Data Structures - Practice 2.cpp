#include <iostream>
#include "clockType.h"
using namespace std;

int main()
{
    clockType myClock;
    int hour = 25;
    int minute = 60;
    int second = 60;
    clockType yourClock(12, 12, 12);
    clockType theClock;

    while (hour > 24)
    {
        cout << "Please enter an hour (24 hour time): ";
        cin >> hour;

        if (hour > 24)
            cout << "You entered an hour greater than 23. Please enter a different hour.\n";
    }
    
    while (minute > 59)
    {
        cout << "Please enter a minute (24 hour time): ";
        cin >> minute;

        if (minute > 59)
            cout << "You entered a minute greater than 59. Please enter a different minute.\n";
    }

    while (second > 59)
    {
        cout << "Please enter a second (24 hour time): ";
        cin >> second;

        if (second > 59)
            cout << "You entered a second greater than 59. Please enter a different second.\n";
    }

    cout << endl;
    myClock.setTime(hour, minute, second);

    cout << "The time is ";
    myClock.printTime();
    cout << ".";
    cout << endl;

    myClock.incrementH();
    myClock.incrementM();
    myClock.incrementS();

    cout << "The new time is ";
    myClock.printTime();
    cout << ".";
    cout << endl;

    cout << "The time for the middle of the day is ";
    yourClock.printTime();
    cout << ".";
    cout << endl;

    if (myClock.equalTime(yourClock))
    {
        cout << "It is the middle of the day.";
        cout << endl;
    }
    else
    {
        cout << "It is not the middle of the day.";
        cout << endl;
    }

    myClock.getTime(hour, minute, second);
    cout << endl;

    cout << "Hours = " << hour << ", minutes = " << minute << ", seconds = " << second << endl;

    theClock.setH(00);
    theClock.setM(00);
    theClock.setS(00);

    cout << "The reset time of the clock is ";
    theClock.printTime();
    cout << ".";
    cout << endl;


    return 0;
}

