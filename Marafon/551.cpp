#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkRecord(string s) {
        int l_cnt = 0;
        int a_cnt = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A'){
                a_cnt += 1;
                if(a_cnt == 2){
                    return false;
                }
            }
            if(s[i] == 'L'){
                l_cnt += 1;
                if(l_cnt > 2){
                    return false;

                }
            }
            else{
                l_cnt = 0;
            }
        }
        return true;
    }
};