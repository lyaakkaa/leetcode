#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++){
            int l = 0;
            int r = image[i].size() - 1;

            while(l <= r){
                swap(image[i][l], image[i][r]);
                l++;
                r--;
            }
            for(int j = 0; j < image[i].size(); j++){
                if(image[i][j] == 0) image[i][j] = 1;
                else image[i][j] = 0;
            }
        }
        return image;


    }
};