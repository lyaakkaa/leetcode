#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        bool ischang = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '6'){
                if(!ischang){
                    s[i] = '9';
                    ischang = true;
                }
            }
        }
        return stoi(s);

    }
};



class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '6'){ 
                s[i] = '9';
                break; 
            }
        }
        return stoi(s);

    }
};


class Solution {
public:
    int maximum69Number (int num) {
        vector <int> dig;
        while(num){
            dig.push_back(num % 10);
            num /= 10;
        }
        for(int i = dig.size() - 1; i >= 0; i--){
            if(dig[i] == 6){
                dig[i] = 9;
                break;                
            }

        }
        int newnum = 0;
        int n = dig.size() - 1;
        for(int i = dig.size() - 1; i >= 0; i--){
            newnum += dig[i] * pow(10,n);
            n--;
        }
        return newnum;
    }
};



