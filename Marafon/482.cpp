#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string t = "";
        int cnt = 0;

        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '-'){
                continue;
            }
            else if(s[i] >= '0' && s[i] <= '9' || s[i]>= 'A' && s[i]<= 'Z'){
                t += s[i];
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                t += (s[i] - 32);

            }
            cnt++;
            if(cnt % k == 0){
                t += '-';
            }
        }

        if(t.back() == '-'){
            t.pop_back();
        }

        reverse(t.begin(), t.end());

        return t;

        


    }
};