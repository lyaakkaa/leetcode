#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' or s[i] == '[' or s[i] == '{'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            else{
                char ch = st.top();
                if(ch == '(' and s[i] != ')'){
                    return false;
                }
                if(ch == '[' and s[i] != ']'){
                    return false;
                }
                if(ch == '{' and s[i] != '}'){
                    return false;
                }
                
            }
            st.pop();
        }
        
    }
        return st.empty();
        
    }
};

