
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) return true;
        return false;
        
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        vector <int> a(26, 0), b(26, 0);

        for(int i = 0; i < s.size(); i++){
            a[s[i] - 'a']++;
            b[t[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
        
    }
};