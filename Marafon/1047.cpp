#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s) {
        deque <char> q;

        for(int i = 0; i < s.size(); i++){
            if(q.empty()) q.push_back(s[i]);
            else{
                if(q.back() == s[i]){
                q.pop_back();
                }
                else{
                    q.push_back(s[i]);
                }
            }
        }

        string ss = "";
        while(!q.empty()){
            ss += q.front();
            q.pop_front();
        }
        return ss;
        
    }
};

class Solution {
public:
    string removeDuplicates(string s) {

        stack <char> st;
        for(int i = 0; i < s.size(); i++){
                if(!st.empty() && st.top() == s[i]){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            
        }
        string ss = "";
        while(!st.empty()){
            ss = st.top() + ss;
            st.pop();
        }
        return ss;
        
    }
};