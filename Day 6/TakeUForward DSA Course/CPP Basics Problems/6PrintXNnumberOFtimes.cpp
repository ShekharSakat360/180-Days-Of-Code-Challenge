#include <bits/stdc++.h>
using namespace std;

/*Print X N numbers of times
Easy

Company
Given two integers X and N, print the value X on the screen N times.

Separate each number by a single space.
Do not add a space after the last number.
After printing all N numbers, move to the next line.
If N = 0, still move to the next line (print an empty line).

Example 1

Input: X = 7, N = 5

Output: 7 7 7 7 7

Example 2

Input: X = 15, N = 1

Output: 15

Example 3

Input: X = -5, N = 4

Output:

-5 -5 -5 -5
Constraints

-100 <= X <= 100
0 <= N <= 100
Extras


Company*/

class Solution {
public:
    // Function to print the value X on the screen N times
    void printX(int X, int N) {
        // Loop to print the value X, N times
        for (int i = 0; i < N; ++i) {
            // Print the value X
            cout << X;
            
            /* Print a space between numbers,
            but not after the last one */
            if (i < N - 1) {
                cout << " ";
            }
        }
        
        // Move to the next line after printing
        cout << endl;
    }
};