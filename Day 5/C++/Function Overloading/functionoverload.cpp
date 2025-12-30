#include <bits/stdc++.h>
using namespace std;

//To calculate max of 2
int myMax(int x,int y)
{
    return (x > y) ? x : y;
}
//Function Overloading in which we can use Same Function name for different types 
//and The Compiler will automatically call the function name with appropriate parameters

//Same Function Name to calculate max of 3
int myMax(int x,int y,int z)
{
    return myMax(myMax(x,y),z);
}
int main()
{
    int a = 10,b=30,c=5;
    cout << myMax(a,b)  << endl;
    cout << myMax(a,b,c)  << endl;
    return 0;
}