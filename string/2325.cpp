#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans = "";
        map <char, char> mp;
        char x = 'a';


        for(int i = 0; i < key.size(); i++){
            if(key[i] != ' '){
                if(mp.find(key[i]) == mp.end()){
                    mp[key[i]] = x;
                    x++;
                }
            }
        }
        for(int i = 0; i < message.size(); i++){
            if(message[i] == ' '){
                ans += ' ';
            }
            else{
                ans += mp[message[i]];
            }
            
        }
        return ans;
    }
};