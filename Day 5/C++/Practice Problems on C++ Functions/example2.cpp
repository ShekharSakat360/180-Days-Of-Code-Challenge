#include <bits/stdc++.h>
using namespace std;

void fun()
{
    static int x = 1; //Static variables are created once and they stay throughout the whole Program  //this line is not executed after subsequent first calll
    //Now no matter you call the function 1 times 2 times 3 times static variable is created once and allocated once no matter how many times you make the function call
    int y = 1;
    x++;
    y++;
    cout << x << " " << y << endl;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;

}