#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        string aa;
        string bb;
        if(a.size() > b.size()){
            bb = '0' * (a.size() - b.size());
            bb = bb + b;
            aa = a;
        }
        else{
            aa = '0' * (b.size() - a.size());
            aa = aa + a;
            bb = b;
        }

        char carry = '0';
        string ans = "";
        for(int i = aa.size() - 1; i >= 0; i--){
            if(aa[i] == '1' and bb[i]=='1' and carry == '0') {
                ans += '0';
                carry = '1';
            } else if(aa[i]=='1' and bb[i]=='1' and carry == '1'){
                ans += '1';
                carry = '1';
            }
            else if(aa[i]=='1' and bb[i]=='0' and carry == '1'){
                ans += '0';
                carry = '1';
            } else if(aa[i]=='0' and bb[i]=='1' and carry == '1'){
                ans += '0';
                carry = '1';
            }else if (aa[i]=='0' and bb[i]=='0' and carry == '0'){
                ans += '0';
                carry = '0';
            }
            else {
                ans += '1';
                carry = '0';
            }

        }
        if(carry == '1'){
            ans += carry;
        }
        string anss = "";
        for(int i = ans.size() - 1; i >= 0; i--){
            anss += ans[i];
        }
        return anss;
        
    }
    
};