#include <bits/stdc++.h>
using namespace std;

/*Switch Case
Easy

Company
Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.

Ensure only the 1st letter of the answer is capitalised.

For printing use:-

for C++ : cout << variable_name;
for Java : System.out.print();
for Python : print()
for Javascript : console.log()

Example 1

Input: day = 3

Output: Wednesday

Example 2

Input: day = 8

Output: Invalid

Example 3

Input: day = 2

Output:

Tuesday
Constraints

0 <= day <= 50*/

class Solution {
public:
    void whichWeekDay(int day) 
    {

        switch(day)
        {
            case 1 : 
                cout << "Monday" << endl;
                break;

            case 2 : 
                cout << "Tuesday" << endl;
                break; 

            case 3 : 
                cout << "Wednesday" << endl;
                break;          

            case 4 : 
                cout << "Thursday" << endl;
                break;      
            
            case 5 : 
                cout << "Friday" << endl;
                break;

            case 6 : 
                cout << "Saturday" << endl;
                break;
            
            case 7 : 
                cout << "Sunday" << endl;
                break;
            
            default : cout << "Invalid" ;
        }
    }
};