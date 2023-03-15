#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> st;
        for(int i = 0; i < nums1.size(); i++){
            st.insert(nums1[i]);
        }
        set <int> ans;
        for(int i = 0; i < nums2.size(); i++){
            if(st.find(nums2[i]) != st.end() && ans.find(nums2[i]) == ans.end()){
                ans.insert(nums2[i]);
            }
        }
        vector <int> anss;
        set <int> :: iterator it;
        for(it = ans.begin(); it != ans.end(); it++){
            anss.push_back(*it);
        }
        return anss;
    }
};