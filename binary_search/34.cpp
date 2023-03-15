#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans;
        int ind1 = first(nums, target);
        int ind2 = last(nums, target);
        if(ind1 != -1 and ind2 != -1)return {ind1, ind2};
        return {-1, -1};
        
    }
    int first(vector <int> &v, int x){
        int l = 0;
        int r = v.size() - 1;
        int res = -1;

        while(l <= r){
            int m = l + (r - l) / 2;

            if(v[m] > x){
                r = m - 1;
            }
            else if(v[m] < x){
                l = m + 1;
            }
            else{
                res = m;
                r = m - 1;
            }
        }
        return res;
    }
    
    int last(vector <int> &v, int x){
        int l = 0;
        int r = v.size() - 1;
        int res = -1;

        while(l <= r){
            int m = l + (r - l) / 2;

            if(v[m] > x){
                r = m - 1;
            }
            else if(v[m] < x){
                l = m + 1;
            }
            else{
                res = m;
                l = m + 1;
            }
        }
        return res;
    }
};