#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cout << "To Check Whether The Year is Leap Year or Not " << endl;
    cout << "Enter The Year :";
    cin >> year;
    cout << endl;

    //Logic For Calculating Leap Year
    //If Year is Evenly Divisible By 4 and not divisible by 100 than it is leap yeare
    //If YEar is Evenly Divisbvle by 400

    if(year % 4==0 && year%100!=0)
    {
        cout << year << " is A Leap Year" << endl;

    }
    else if(year % 400==0)
    {
        cout << year << " is A Leap Year" << endl;
    }
    else{

        cout << year << "  is NOt  A Leap Year" << endl;
    }

    return 0;
}