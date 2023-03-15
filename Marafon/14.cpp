#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        int n =strs.size();
        string ans; 
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[n-1];
        for(int i =0; i< a.size(); i++){
            if(a[i] == b[i]){
                ans += a[i];
            }else break;
        }
        return ans;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
        if(strs.size() == 0) return "";
        string pref = strs[0];
        for(int i = 1; i < strs.size(); i++){
            while(strs[i].find(pref) != 0){
                pref = pref.substr(0, pref.length() - 1);
            }
        }
        return pref;
    }
};