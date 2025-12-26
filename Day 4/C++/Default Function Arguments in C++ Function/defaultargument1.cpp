#include<bits/stdc++.h>
using namespace std;

//Default Argument Must Be There Either in Function Declaration Or Definition
int sum(int a,int b,int c=0,int d=0);

int main()
{
    cout << sum(10,20,30) << endl;
    cout << sum(10,5) << endl;

}


int sum(int a,int b,int c,int d)
{
    return (a+b+c+d);
}