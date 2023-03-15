#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector <string> words;
        string temp="";

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                words.push_back(temp);
                temp = "";
            }
            else if(i + 1 == s.size()){
                temp += s[i];
                words.push_back(temp);
                temp = "";
            }
            else {
                temp += s[i];
            }
        }
        if(words.size() != pattern.size()){
            return false;
        }
        

    }
};