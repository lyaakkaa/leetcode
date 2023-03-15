#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        queue<char> q;
        
        for(int i=0;i<s.length();i++){
            q.push(s[i]);
        }

        for(int i=0;i<t.length();i++){
            if(q.front() == t[i]){
                q.pop();
            }
        }
        return !q.size();
    }
};