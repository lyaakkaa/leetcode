#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
map <char, int> mp;
    bool isAlienSorted(vector<string>& words, string order) {
        if(words.size() < 2){
            return true;
        }
        for(int i = 0; i < order.size(); i++){
            mp[order[i]] = i;
        }
        int i = 1;
        while(i < words.size() && cmp(words[i - 1], words[i])){
            i++;
        }
        if(i < words.size()){
            return false;
        }
        return true;
    }

    bool cmp(string a, string b){
        if(a == b) return true;
        int i = 0; 
        while(a[i] == b[i]) i++;
        return mp[a[i]] < mp[b[i]];
    }
};