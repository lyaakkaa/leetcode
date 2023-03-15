#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "--X" || operations[i] == "X--"){
                cnt--;
            }
            else{
                cnt++;
            }
        }
        return cnt;
    }
};


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value = 0;
        for(string operation : operations) {
            if(operation.find('+') != string::npos) {
                value = ++value;
            } else {
                value = --value;
            }
        }
        return value;
    }
};