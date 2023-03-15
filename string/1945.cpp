#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string t = "";
        for(int i = 0; i < s.size(); i++){
            t += to_string(s[i] - 'a' + 1);
        }
        int sum = 0;
        while(k--){
            sum = 0;
            for(int i = 0; i < t.size(); i++){
                sum += t[i] - '0';
            }
            t = to_string(sum);
        }
        return sum;
    }
};
// iiii k = 1;
// 9999 = 9 + 9 + 9 + 9 = 36;


//leetcode   k = 2;
// 12 + 5 + 5 + 20 + 3 + 15 + 4 + 5 
// k = 2  : 1 + 2 + 5 + 5 + 2 + 0 + 3 + 1 + 5 + 4 + 5 = 33;  t = "33"
// k = 1 : 3 + 3 = 6;