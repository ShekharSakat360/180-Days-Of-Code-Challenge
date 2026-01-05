#include <bits/stdc++.h>
using namespace std;
/*If Else Adult Teen Problem
Easy

Company
Given an integer age, print on the screen:

Adult if age >= 18
Teen if age < 18
Do not change the case of any letter in "Adult" and "Teen" while printing the answer.



For printing use:-

for C++ : cout << variable_name<<endl;
for Java : System.out.println();
for Python : print()
for Javascript : console.log()

Example 1

Input: age = 19

Output: Adult

Explanation: age is greater than or equal to 18.

Example 2

Input: age = 7

Output: Teen

Explanation: age is less than 18.

Example 3

Input: age = 18

Output:

Adult
Constraints

0 <= age <= 100*/

class Solution 
{
    public:
        void isAdult(int age) {
            // Your code goes here
            if(age>=18)
                cout << "Adult" << endl;
            else 
                cout << "Teen" << endl;
        }
};