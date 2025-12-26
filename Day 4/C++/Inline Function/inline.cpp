#include<iostream>
using namespace std;

#define add(x,y) (x+y)

inline int getMax(int x, int y)
{
    return (x>y) ? x : y;
}

int main()
{
    cout << getMax(10,24) << endl;
    return 0;
}