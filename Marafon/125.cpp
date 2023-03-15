#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   bool isPalindrome(string s) {
	string newString = "";
	string newString2 = "";

	for (int i = 0 ; i < s.length(); i++)
	{	if (s[i] >= 'a' && s[i] <= 'z')
			newString += s[i];
		else if (s[i] >= 'A' && s[i] <= 'Z')
			newString += (s[i] + 32);
        if (s[i] >= '0' && s[i] <= '9')
			newString += s[i];
	}
	newString2 = newString;
	reverse(newString.begin(), newString.end());
	return newString == newString2;
}

}; 


class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        int l = 0;
        int r = s.size() - 1;

        while(l <= r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};