#include <iostream>
using namespace std;

//Function Overloading means we can have same function name and in which the function will take
//different type of input as parameter that is different datatypes as input

//Below is a print function which prints Character,String,Integer using same function name we
//can print different things

void print(string s)
{
    cout << s << "\n";
}

//Print function prints Integer
void print(int x)
{
    cout << x << "\n";
}

void print(char c)
{
    cout << c << "\n";
}

int main()
{
    print('a');
    print("GFG");
    print(3);
    return 0;
}