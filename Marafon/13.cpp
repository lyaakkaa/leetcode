#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
         
        int i = 0;
        while(i < s.size()){
            if(i <  s.size() && m[s[i]] < m[s[i + 1]]){
                ans += m[s[i+1]] - m[s[i]];
                i += 2;
            }
            else{
                ans += m[s[i]];
                i += 1;
            }
        }
        return ans;
    }
};


// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.