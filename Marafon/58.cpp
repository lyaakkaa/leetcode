#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int ans = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == ' '){
                if(cnt > 0){
                    break;
                }
            }
            else{
                cnt++;
            }
        }
        return cnt;
        
    }
};

//"   fly me   to   the moon  "
//                      432100