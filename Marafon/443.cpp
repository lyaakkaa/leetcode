#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int compress(vector<char>& chars) {
        vector <int> v;
        int ind = 0;

        while(ind < v.size()){
            char x = v[ind];
            int cnt = 0;

            while(ind < v.size() && v[ind] == x){
                cnt++;
                ind++;
            }
            int ans = cnt;
            string str = "";
            while(ans){
                char ch = (ans % 10) + '0';
                str = str + ch;
                ans /= 10;
            }
            reverse(str.begin(), str.end());
            v.push_back(x);
    
        }
        
    }
};