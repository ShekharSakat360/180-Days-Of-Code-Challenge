#include <bits/stdc++.h>
using namespace std;

/*If ElseIf
Easy

Company
Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise.


For printing use:-

for C++ : cout << variable_name;
for Java : System.out.print();
for Python : print()
for Javascript : console.log()
for C# : Console.WriteLine();
for Go : fmt.Println()

Example 1

Input: marks = 95

Output: Grade A

Explanation: marks are greater than or equal to 90.

Example 2

Input: marks = 14

Output: Fail

Explanation: marks are less than 35.

Example 3

Input: marks = 70

Output:

Grade B*/

class Solution {
public:
    void studentGrade(int marks) 
    {

        if(marks >= 90)
        {
            cout << "Grade A" << endl;
        }
        else if(marks>=70)
        {
            cout << "Grade B" << endl;
        }
        else if(marks>=50)
        {
            cout << "Grade C" << endl;
        }
        else if(marks>=35)
        {
            cout << "Grade D" << endl;
        }
        else{

            cout << "Fail" << endl;
        }

    }
};