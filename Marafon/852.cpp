#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0; 
        int r = arr.size() - 1;
        while(l <= r){
            int m = l + (r - l) / 2;
            if(arr[m - 1] < arr[m]  && arr[m] > arr[m + 1]){
                return m;
            }
            if(arr[m] > arr[m - 1]){
                l = m;
            }
            else{
                r = m;
            }
            
        }
        return r;

    }
};