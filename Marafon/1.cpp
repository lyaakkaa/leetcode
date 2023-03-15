
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        set<int> ans;
        set <int> :: iterator it;
        vector<int> v;
        
        for(int i = 0; i < n.size(); ++i){
            for (int j = 0; j < n.size(); ++j){
                if (n[i] + n[j] == target and i != j){
                    ans.insert(i);
                    ans.insert(j);
                }
            }
        }
        for(it = ans.begin(); it != ans.end(); ++it){
            v.push_back(*it);
        }
        return v;
    }
    
    
};