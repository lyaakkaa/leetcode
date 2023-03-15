#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};





class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.length()==0)
            return 0;
        
        for(int i = 0;i<haystack.length(); i++)
        {
            if(haystack.substr(i,needle.length()) == needle)
                return i;
        }
        
        return -1;
    }
};


class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        }
        for(int i = 0; i < haystack.size() - needle.size(); i++){
            for(int j = 0; j < needle.size(); j++){
                if(haystack[i + j] != needle[j]){
                    break;
                }
                if (j == needle.size() - 1){
                    return i;
                }
            }

        }
        return -1;
    }
};





