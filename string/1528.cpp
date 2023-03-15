#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string t = "";
        map <int, char> mp;

        for(int i = 0; i < s.size(); i++){
            mp[indices[i]] = s[i];
        }
        for(int i = 0; i < s.size(); i++){
            t += mp[i];
        }
        return t;

    }
};