#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;
        while(l < r){
            if(!iswowel(s[l])){
                l++;
            }
            else if(!iswowel(s[r])){
                r--;
            }
            else{
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;

    }
    bool iswowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||  c =='A' ||  c =='E' || c =='I' || c =='O' || c =='U'){
            return true;
        }
        return false;
    }
};


class Solution {
public:
    string reverseVowels(string s) {
 
        int l = 0;
        int r = s.size() - 1;
        while(l <= r){
            if((tolower(s[l]) != 'a' && tolower(s[l]) != 'e' && tolower(s[l]) != 'i' && tolower(s[l]) != 'o' && tolower(s[l]) != 'u')){
                if(l + 1 < r){
                    l++;
                }
                else{
                    return s;
                }
            }
            else if((tolower(s[r]) != 'a' && tolower(s[r]) != 'e' && tolower(s[r]) != 'i' && tolower(s[r]) != 'o' && tolower(s[r]) != 'u')){
                if(r - 1 > l){
                    r--;
                }
                else{
                    return s;
                }
            }
            else{
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};