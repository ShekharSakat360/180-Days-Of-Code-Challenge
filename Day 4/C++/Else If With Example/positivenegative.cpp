#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //Type Declaration
    cout << "To Check Whether The Given Number Entered is Positive , Negative or Zero"  << endl;
    cout << "Enter A Number : ";
    cin >> n;
    cout << endl;

    if(n>0)
        cout << "Positive Number" << endl;
    else if(n<0)
        cout << "Negative Number " << endl;
    else    
        cout << "Zero" << endl;

        
    return 0;
}