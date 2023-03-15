#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {0};
        for(int i = 0; i < s.size(); i++){
            H[s[i] - 'a']--;
        }
        for(int i = 0; i < t.size(); i++){
            H[t[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(H[i] == 1){
                return char(i + 'a');
            }
        }
        return '@';
    }
};