#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector <string> ans;

        if(nums.size() == 0){
            return ans;
        }

        string s = to_string(nums[0]);
        string e = to_string(nums[0]);

        for(int i = 0; i < nums.size(); i++){
            if(i + 1 < nums.size() && nums[i] + 1 == nums[i + 1]){

            }
            else{
                e = to_string(nums[i]);
                if(s == e){
                    ans.push_back(s);
                }
                else{
                    ans.push_back(s + "->" + e);
                }
                if(i + 1 < nums.size()){
                    s = to_string(nums[i + 1]);
                }
            }
        }
        return ans;
    }
};