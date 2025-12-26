#include <iostream>
using namespace std;

int getMax(int x,int y); //Function Declaration

int main()
{
    int a = 10,b=20;
    cin >> a >> b;
    cout << getMax(a,b);
    return 0;
}

//Function Definition


int getMax(int x,int y)
{
    if(x > y)
        return x;
    else
        return y;
}
