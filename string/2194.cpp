#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> cellsInRange(string s) {
        int col1 = s[0] - 'A';
        int row1 = s[1] - '0';
        int col2 = s[3] - 'A';
        int row2 = s[4] - '0';

        vector <string> res;
        int temp = row1;

        while(col1 <= col2){
            while(row1 <= row2){
                string s = "";
                s += (col1 + 'A');
                s += (row1 + '0');
                row1++;
                res.push_back(s);
            }
            row1 = temp;
            col1++;
        }
        return res;
    }
};