#include <bits/stdc++.h>
using namespace std;

int main()
{
    int op,x,y; //OP Stands For Operation input  1 for + 2 for - 3 for *
    cin >> op >> x >> y;

    if(op==1)
    {
        cout << x + y;
    }
    else if(op==2)
    {
        cout << x - y;
    }
    else if(op==3)
    {
        cout << x * y;
    }
    else{
        
        cout << "Invalid Input" << endl;
    }

    return 0;
}