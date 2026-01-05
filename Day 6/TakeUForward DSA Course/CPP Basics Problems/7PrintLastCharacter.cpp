#include <bits/stdc++.h>
using namespace std;

/*Print last character of string
Easy

Company
Given a string s. Return the last character of the given string s.


Example 1

Input : s = "takeuforward"

Output : d

Explanation : The last character of given string is "d".

Example 2

Input : s = "goodforyou"

Output : u

Explanation : The last character of given string is "u".

Example 3

Input : s = "lovecoding"

Output:

g
Constraints

1 <= s.length <= 100
s consist of only lowercase English letters*/


class Solution{
    public:
        char lastChar(string& s){
            //your code goes here

            return s[s.size()-1];
        }
};