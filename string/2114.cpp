#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = -9999;
        for(int i = 0; i < sentences.size(); i++){
            int cnt = 0;
            for(int j = 0; j < sentences[i].size(); j++){
                if(isspace(sentences[i][j])){
                    cnt++;
                }
            }
            if(cnt > maxi){
                maxi = cnt;
            }

        }
        return maxi;
    }
};