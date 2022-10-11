//Author: Dan Phala 11 October 2022

#include <iostream>
#include <cmath>

using namespace std;


double AngleBetweenHourAndMinutes(double _hour, double _minutes)
{
    double finalAngle  = -1;    //Program should never return negative numbers
    if(_hour > 12 || _hour < 0 || _minutes > 60 || _minutes < 0)
    {
        cerr << "__ERROR__ Analogue clock has a maximum of 12 hours and 60 minutes" << endl;
    }
    else
    {
        double hourAngle = (((90)*(_hour))/3);
        double minuteAngle = (((90)*(_minutes))/15);
        finalAngle = abs(hourAngle - minuteAngle); //Maths.abs will always return an obsulute value (a positive number)
    }
    return finalAngle;
}

int main()
{
    double givenHour, givenMinutes = -1;

    cout << "Please enter the hour:" ;
    cin >> givenHour;
    cout << "Please enter the minutes:";
    cin >> givenMinutes;
    cout <<"The angle between " << givenHour << " hours and " << givenMinutes << " minutes is: " <<AngleBetweenHourAndMinutes(givenHour,givenMinutes)<< " degrees."<< endl;

    return 0;
}


