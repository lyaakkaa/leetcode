#include <bits/stdc++.h>
using namespace std;
class Solution{
    
int largestInteger(int num) 
    {
        priority_queue<int, vector<int>, less<int>> even;
        priority_queue<int, vector<int>, less<int>> odd;
        stack<char> s;
        string result = "";
        
        while(num != 0)
        {
            int dig = num % 10;
            
            if(dig % 2 == 0) 
            {
                s.push('e');
                even.push(dig);
            }
            else
            {
                s.push('o');
                odd.push(dig);
            }
            
            num = num / 10;
        }
        
        while(!s.empty())
        {
            if(s.top() == 'e')
            {
                result += to_string(even.top());
                even.pop();
            }
            else  
            {
                result += to_string(odd.top());
                odd.pop();
            }
            
            s.pop();
        }
        
        return stoi(result);
    }

};