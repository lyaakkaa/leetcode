#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        set <int> st;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
            
        }
        return st.size() != nums.size();
        
    }
};


	// class Solution {
	// public:
	// 	bool containsDuplicate(vector<int>& nums) {
	// 		int n=nums.size();
	// 		sort(nums.begin(),nums.end());
	// 		for(int i=0;i<n-1;i++){
	// 			if(nums[i]==nums[i+1]){
	// 				return true;}
	// 				else 
	// 				 continue;
	// 		}
	// 		return false;
	// 	}
	//  };