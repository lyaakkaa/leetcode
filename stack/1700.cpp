#include <bits/stdc++.h>
using namespace std;

// Input: students = [1,1,0,0], sandwiches = [0,1,0,1]
// Output: 0 

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue <int> q_st;
        queue <int> q_san;

        for(int i = 0; i < students.size(); i++){
            q_st.push(students[i]);
            q_san.push(sandwiches[i]);
        }

        int cnt = 0;

        int temp = q_san.size() * q_san.size();

        while(cnt < temp){
            if(q_st.front() == q_san.front()){
                q_san.pop();
                q_st.pop();
            }
            else{
                q_st.push(q_st.front());
                q_st.pop();
            }
            if(q_st.size() == 0) break;
            cnt++;
        }

        return q_st.size();
        
    }
};