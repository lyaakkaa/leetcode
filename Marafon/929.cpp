#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {

        set <string> st;
        for(int i = 0; i < emails.size(); i++){
            int place = 0;
            place = func1(emails[i]);
            if(place == -1){
                continue;
            }
            st.insert(func2(emails[i], place));
        }
        return st.size();
        
    }
    private:

    int func1(string& s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '@'){
                return i;
            }
        }
        return -1;
    }

    string func2(string& s, int n){
        string temp = "";
        for(int i = 0; i < n; i++){
            if(s[i] == '.'){
                continue;
            }
            else if(s[i] == '+'){
                break;
            }
            else{
                temp += s[i];
            }

            for(int i = n; i < s.size(); i++){
                temp += s[i];
            }
        }
        return temp;
    }
};