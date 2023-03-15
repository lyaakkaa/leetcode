#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int longestPalindrome(string s) {
        map <char, int> mp;
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        map <char, int> :: iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->second % 2 == 0){
                ans += it ->second;
            }
            else{
                ans += it->second - 1;
            }

        }
        if(s.size() != ans){
            ans += 1;
        }
        return ans;
    }
};