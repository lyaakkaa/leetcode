#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {

        stack <int> st;

        for(int i = 0; i < ops.size(); i++){
            if(ops[i] == "+"){
                int n = st.top();
                st.pop();
                int m = st.top();
                st.push(n);
                st.push(n+m);
            }
            else if(ops[i] == "C"){
                st.pop();
            }
            else if(ops[i] == "D"){
                st.push(st.top() * 2);
            }
            else{
                st.push(stoi(ops[i]));
            }
        }

        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};