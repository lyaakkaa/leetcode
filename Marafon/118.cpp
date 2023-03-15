#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1},{1,1}};
        vector<vector<int>> result;
        result.push_back({1});
        result.push_back({1,1});
        for(int i =2; i<numRows; i++){
            vector<int> v;
            for(int j = 0; j<i+1; j++){
                if(j == 0 || j == i) v.push_back(1);
                else{
                    v.push_back(result[i-1][j-1] + result[i-1][j]);
                }
            }
            result.push_back(v);
        }
        return result;
    }
};
