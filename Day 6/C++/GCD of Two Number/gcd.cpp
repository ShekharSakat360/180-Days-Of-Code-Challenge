#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter Two Numbers :";
    cin >> a >> b;

    int minimum = min(a,b); //Step 1 Find Minimum 
    int ans = 1;
    //Step 2 Iterate from 1 to minmimum

    for(int i=1; i<=minimum; i++)
    {
        if(a % i==0 && b % i==0)
            ans = i;

    }
    cout << ans << endl;

    return 0;
}