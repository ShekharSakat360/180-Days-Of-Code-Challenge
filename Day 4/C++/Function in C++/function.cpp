#include <bits/stdc++.h>
using namespace std;

//Function Definition

void fun()
{
    cout << " fun() Called \n" ;
}

int main()
{
    cout << "Before Calling fun()\n";
    fun(); //Call to Function main() is the calling function fun() is the called function
    cout << "After Calling fun()\n";
    
    return 0;
}