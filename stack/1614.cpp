#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxDepth(string s){
            stack <char> st;

            int len = 0;
            int cnt = 0;

            for(int i = 0; i < s.size(); i++){
                if(s[i] == '('){
                    st.push('(');
                    cnt++;
                }
                else if(s[i] == ')' && cnt > 0){
                    if(st.top() == '('){
                        len = max(len, cnt);
                        cnt--;
                        st.pop();
                    }
                }
            }
            return len;

        }

};