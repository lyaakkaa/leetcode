#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size() < 3){
            return false;
        }

        int i = 0;
        while(i < arr.size() - 1 && arr[i] < arr[i + 1]){
            i += 1;
        }
        int j = arr.size() - 1;
        while(j > 0 && arr[j - 1] > arr[j]){
            j -= 1;
        }
        return i == j && i > 0 && j < arr.size() - 1;

    }
};