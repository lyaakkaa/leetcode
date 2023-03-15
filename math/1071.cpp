#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int g = gcd(str1.size(), str2.size());
        string ans = "";
        if(str1 + str2 == str2 + str1){
            ans = str1.substr(0, g);
        }
        return ans;
    }

    int gcd(int a, int b){
        if (b == 0){
            return a;
        }
        else{
            return gcd(b, a % b);
        }
    }
};