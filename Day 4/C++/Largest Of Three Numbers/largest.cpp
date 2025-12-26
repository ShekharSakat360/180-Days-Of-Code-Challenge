#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Largest Of Three Numbers" << endl;
    cout << "Enter Three Numbers :";
    cin >> a >> b >> c;
    cout << endl;

    if(a>=b and a>=c)
        cout << a << endl;
    else if(b>=a and b>=c)
        cout << b << endl;
    else 
        cout << c << endl;

    return 0;
}