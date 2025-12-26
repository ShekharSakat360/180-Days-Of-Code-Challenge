#include <bits/stdc++.h>
using namespace std;
//Function Call Stack Concept Whatever function is called last is finished first
//that is removed from stack  Here in this example function fun2() is called last
//it Finishes first then fun1() and lastly main()
void fun2()
{
    cout << "Inside fun2() " << endl;
}

void fun1()
{
    cout << "Before fun2()" << endl;
    fun2();
    cout << "After fun2()" << endl;
}

int main()
{
    cout << "Before fun1()" << endl;
    fun1();
     cout << "After fun1()" << endl;
    return 0;
}